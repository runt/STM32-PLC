#ifndef PLCSTATE_H
#define PLCSTATE_H

typedef struct
{
    /*
     * 1) power on  & voltage>=12V -> PWR_LED ON
     * 2) power on  & voltage< 12V -> PWR_LED flashing
     * 3) power off | voltage< 05V -> PWR_LED OFF
     */
    bool        pwr_on: 1;
    bool        pwr_ok: 1;

    /*
     * 1) PLC stoped     -> STP_LED ON
     * 2) load FW to PLC -> STP_LED flashing
     * 3) fault/errors   -> STP_LED flashing
     * 3) PLC run        -> STP_LED OFF
     */
    bool        stop_load: 1;
    bool        stop_fault: 1;
    bool        stop_stop: 1;

    /*
     * 1) firmware not loaded fully -> RUN_LED flashing
     * 2) FW running                -> RUN_LED ON
     * 3) stop/fault                -> RUN_LED OFF
     */
    bool        run_load: 1;
    bool        run_run: 1;

    bool        fault: 1;

    bool        fault_relay: 1;
} plc_state_t;

enum class EPLCState
{
    INIT,
    LOAD_FW,
    WAIT_FW,
    BUS_INIT,
    RUN,
    STOP,
    FAULT,
};

typedef struct
{
    bool    initialized: 1;
    bool    overrun: 1;
    bool    fault: 1;
} module_state_t;

class PLCState
{
public:
    static void init();
    static void signal_1Hz();

    static void to_stop();
    static void to_full_stop();
    static void to_load_fw_in_plc();
    static void to_wait_fw_in_plc();

    static void to_bus_init();

    static void to_fw_load();
    static void to_run();

    static void to_error();
    static void to_fault();

    static inline void reset_fault_relay() { m_state.fault_relay = false; }
    static inline void fault_relay_ON() { m_state.fault_relay = true; }

    static inline EPLCState get_state() { return m_state_en; }
private:
    static  plc_state_t m_state;
    static  EPLCState   m_state_en;
    static  bool        m_blink_on;
};

#endif // PLCSTATE_H
