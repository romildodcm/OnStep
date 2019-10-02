// TMC5160 stepper driver init

#if AXIS1_DRIVER_MODEL == TMC5160_QUIET
  #undef AXIS1_DRIVER_MODEL
  #define AXIS1_DRIVER_MODEL TMC5160
  #define AXIS1_DRIVER_DECAY_MODE STEALTHCHOP
#elif AXIS1_DRIVER_MODEL == TMC5160_VQUIET
  #undef AXIS1_DRIVER_MODEL
  #define AXIS1_DRIVER_MODEL TMC5160
  #define AXIS1_DRIVER_DECAY_MODE STEALTHCHOP
  #define AXIS1_DRIVER_DECAY_MODE_GOTO STEALTHCHOP
#endif
#if AXIS1_DRIVER_MODEL == TMC5160
  #undef AXIS1_DRIVER_MODEL
  #define AXIS1_DRIVER_MODEL TMC_SPI
  #ifndef AXIS1_DRIVER_IRUN
    #warning "Configuration: AXIS1_DRIVER_IRUN current isn't specified, falling back to 600 (mA.)"
    #define AXIS1_DRIVER_IRUN 600 // peak current in mA (0.6A)
  #endif
  #ifndef AXIS1_DRIVER_RSENSE
    #define AXIS1_DRIVER_RSENSE 0.075
  #endif
#endif

#if AXIS2_DRIVER_MODEL == TMC5160_QUIET
  #undef AXIS2_DRIVER_MODEL
  #define AXIS2_DRIVER_MODEL TMC5160
  #define AXIS2_DRIVER_DECAY_MODE STEALTHCHOP
#elif AXIS2_DRIVER_MODEL == TMC5160_VQUIET
  #undef AXIS2_DRIVER_MODEL
  #define AXIS2_DRIVER_MODEL TMC5160
  #define AXIS2_DRIVER_DECAY_MODE STEALTHCHOP
  #define AXIS2_DRIVER_DECAY_MODE_GOTO STEALTHCHOP
#endif
#if AXIS2_DRIVER_MODEL == TMC5160
  #undef AXIS2_DRIVER_MODEL
  #define AXIS2_DRIVER_MODEL TMC_SPI
  #ifndef AXIS2_DRIVER_IRUN
    #warning "Configuration: AXIS2_DRIVER_IRUN current isn't specified, falling back to 600 (mA.)"
    #define AXIS2_DRIVER_IRUN 600
  #endif
  #ifndef AXIS2_DRIVER_RSENSE
    #define AXIS2_DRIVER_RSENSE 0.075
  #endif
#endif

#if ROTATOR == ON
  #if AXIS3_DRIVER_MODEL == TMC5160_QUIET
    #undef AXIS3_DRIVER_MODEL
    #define AXIS3_DRIVER_MODEL TMC5160
    #define AXIS3_DRIVER_DECAY_MODE STEALTHCHOP
  #elif AXIS3_DRIVER_MODEL == TMC5160_VQUIET
    #undef AXIS3_DRIVER_MODEL
    #define AXIS3_DRIVER_MODEL TMC5160
    #define AXIS3_DRIVER_DECAY_MODE STEALTHCHOP
  #endif
  #if AXIS3_DRIVER_MODEL == TMC5160
    #undef AXIS3_DRIVER_MODEL
    #define AXIS3_DRIVER_MODEL TMC_SPI
    #ifndef AXIS3_DRIVER_IRUN
      #warning "Configuration: AXIS3_DRIVER_IRUN current isn't specified, falling back to 200 (mA.)"
      #define AXIS3_DRIVER_IRUN 200
    #endif
    #ifndef AXIS3_DRIVER_RSENSE
      #define AXIS3_DRIVER_RSENSE 0.075
    #endif
  #endif
#endif

#if FOCUSER1 == ON
  #if AXIS4_DRIVER_MODEL == TMC5160_QUIET
    #undef AXIS4_DRIVER_MODEL
    #define AXIS4_DRIVER_MODEL TMC5160
    #define AXIS4_DRIVER_DECAY_MODE STEALTHCHOP
  #elif AXIS4_DRIVER_MODEL == TMC5160_VQUIET
    #undef AXIS4_DRIVER_MODEL
    #define AXIS4_DRIVER_MODEL TMC5160
    #define AXIS4_DRIVER_DECAY_MODE STEALTHCHOP
  #endif
  #if AXIS4_DRIVER_MODEL == TMC5160
    #undef AXIS4_DRIVER_MODEL
    #define AXIS4_DRIVER_MODEL TMC_SPI
    #ifndef AXIS4_DRIVER_IRUN
      #warning "Configuration: AXIS4_DRIVER_IRUN current isn't specified, falling back to 200 (mA.)"
      #define AXIS4_DRIVER_IRUN 200
    #endif
    #ifndef AXIS4_DRIVER_RSENSE
      #define AXIS4_DRIVER_RSENSE 0.075
    #endif
  #endif
#endif

#if FOCUSER2 == ON
  #if AXIS5_DRIVER_MODEL == TMC5160_QUIET
    #undef AXIS5_DRIVER_MODEL
    #define AXIS5_DRIVER_MODEL TMC5160
    #define AXIS5_DRIVER_DECAY_MODE STEALTHCHOP
  #elif AXIS5_DRIVER_MODEL == TMC5160_VQUIET
    #undef AXIS5_DRIVER_MODEL
    #define AXIS5_DRIVER_MODEL TMC5160
    #define AXIS5_DRIVER_DECAY_MODE STEALTHCHOP
  #endif
  #if AXIS5_DRIVER_MODEL == TMC5160
    #undef AXIS5_DRIVER_MODEL
    #define AXIS5_DRIVER_MODEL TMC_SPI
    #ifndef AXIS5_DRIVER_IRUN
      #warning "Configuration: AXIS5_DRIVER_IRUN current isn't specified, falling back to 200 (mA.)"
      #define AXIS5_DRIVER_IRUN 200
    #endif
    #ifndef AXIS5_DRIVER_RSENSE
      #define AXIS5_DRIVER_RSENSE 0.075
    #endif
  #endif
#endif
