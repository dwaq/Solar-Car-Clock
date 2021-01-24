### Before ROP:

    STVP_CmdLine version 1.6

    Verbose ON
    Log activity ON
    Display Progress OFF
    Message box warning if protect option byte ON
    Loop mode OFF
    Erase device OFF
    Blank check device OFF
    Verify device ON

    Configuration:
    BoardName=ST-LINK ST-LINK_ID=0 Device=STM8S105x6 Port=USB ProgMode=SWIM

    Hit 'Esc' key to abort during communication.

    >>> Reading PROGRAM MEMORY
    <<< Reading PROGRAM MEMORY succeeds

    >>> Verifying PROGRAM MEMORY
    <<< Verifying PROGRAM MEMORY succeeds



`echo Exit Code is %errorlevel%`

Exit Code is 0




### After ROP:
    STVP_CmdLine version 1.6

    Verbose ON
    Log activity ON
    Display Progress OFF
    Message box warning if protect option byte ON
    Loop mode OFF
    Erase device OFF
    Blank check device OFF
    Verify device OFF

    Configuration:
    BoardName=ST-LINK ST-LINK_ID=0 Device=STM8S105x6 Port=USB ProgMode=SWIM

    Hit 'Esc' key to abort during communication.

    >>> Reading PROGRAM MEMORY`
    (API) ERROR : The device is protected
    (API) WARNING : Operation aborted
    <<< Reading PROGRAM MEMORY fails


`echo Exit Code is %errorlevel%`

Exit Code is 1