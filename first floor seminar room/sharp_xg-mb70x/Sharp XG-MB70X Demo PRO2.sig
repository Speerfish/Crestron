[RLSIG0001]) ::Input_1(RGB_1)_Fb*:S-1.000000FE�    ( ::clear_input_ilock:S-1.00000106     ::input_1_i:S-1.000000BF�      ::input_2_i:S-1.000000C0�      ::input_3_i:S-1.000000C1�      ::input_4_i:S-1.000000C2�    ' ::no_input_command:S-1.00000107   ! ::input_1_go:S-1.00000070p    ! ::input_2_go:S-1.00000071q    ! ::input_3_go:S-1.00000072r    ! ::input_4_go:S-1.00000073s    * ::no_input_command_go:S-1.00000108   * ::no_power_command_go:S-1.000000FD�    ) ::Input_2(RGB_2)_Fb*:S-1.00000100    ) ::Input_3(Video)_Fb*:S-1.00000102   + ::Input_4(S-Video)_Fb*:S-1.00000104   ( ::Input_1(RGB_1)_bf:S-1.000000FF�    ( ::Input_2(RGB_2)_bf:S-1.00000101   ( ::Input_3(Video)_bf:S-1.00000103   * ::Input_4(S-Video)_bf:S-1.00000105   ) ::command_to_send_or:S-1.000000E3�    # ::Power_On_Fb*:S-1.000000F4�    " ::power_on_bf:S-1.000000F5�    $ ::Power_Off_Fb*:S-1.000000F6�    # ::power_off_bf:S-1.000000F7�    % ::Power_Toggle_t:S-1.000000F8�    & ::power_on_toggle:S-1.000000F9�    ' ::power_off_toggle:S-1.000000FA�    ( ::clear_power_ilock:S-1.000000FB�    $ ::power_on_bf_i:S-1.000000BB�    % ::power_off_bf_i:S-1.000000BC�    ( ::power_on_toggle_i:S-1.000000BD�    ) ::power_off_toggle_i:S-1.000000BE�    ' ::no_power_command:S-1.000000FC�    % ::power_on_bf_go:S-1.0000006Cl    & ::power_off_bf_go:S-1.0000006Dm    ) ::power_on_toggle_go:S-1.0000006En    * ::power_off_toggle_go:S-1.0000006Fo    # ::send_command:S-1.000000E4�    ! ::poll_power:S-1.000000A8�    # ::poll_input_2:S-1.000000AB�    $ ::poll_vid_mute:S-1.000000AC�    ) ::from_device$_power:S-1.000001E8�   ::power_in:S-1.000001E9�  # ::power_off_in:S-1.00000184�   " ::power_on_in:S-1.00000183�   $ ::power_on_in_m:S-1.000001B5�   # ::poll_input_1:S-1.000000AA�    + ::from_device$_input_1:S-1.000001EA�  + ::from_device$_input_2:S-1.000001EC�  & ::input_poll_1_in:S-1.000001EB�  & ::input_poll_2_in:S-1.000001ED�  ! ::input_4_in:S-1.00000188�   ! ::input_3_in:S-1.00000187�   ! ::input_1_in:S-1.00000185�   ! ::input_2_in:S-1.00000186�   # ::input_1_in_m:S-1.000001B7�   # ::input_2_in_m:S-1.000001B8�   # ::input_3_in_m:S-1.000001B9�   # ::input_4_in_m:S-1.000001BA�   ( ::Video_Mute_On_Fb*:S-1.00000109	   ) ::Video_Mute_Off_Fb*:S-1.0000010B   * ::Video_Mute_Toggle_t:S-1.0000010D   ' ::Video_Mute_On_bf:S-1.0000010A
   ( ::video_mute_off_bf:S-1.0000010C   ) ::video_mute_on_t_bf:S-1.0000010E   * ::video_mute_off_t_bf:S-1.0000010F   - ::clear_video_mute_ilock:S-1.00000110   & ::Video_Mute_On_i:S-1.000000C3�    ' ::video_mute_off_i:S-1.000000C4�    ( ::video_mute_on_t_i:S-1.000000C5�    ) ::video_mute_off_t_i:S-1.000000C6�    ' ::Video_Mute_On_go:S-1.00000074t    ( ::video_mute_off_go:S-1.00000075u    ) ::video_mute_on_t_go:S-1.00000076v    * ::video_mute_off_t_go:S-1.00000077w    , ::no_video_mute_command:S-1.00000111   / ::no_video_mute_command_go:S-1.00000112   ! ::freeze_on*:S-1.00000113   " ::freeze_off*:S-1.00000115   & ::freeze_toggle_t:S-1.00000117   # ::freeze_on_bf:S-1.00000114   $ ::freeze_off_bf:S-1.00000116   % ::freeze_on_t_bf:S-1.00000118   & ::freeze_off_t_bf:S-1.00000119   ) ::clear_freeze_ilock:S-1.0000011A   " ::freeze_on_i:S-1.000000C7�    # ::freeze_off_i:S-1.000000C8�    $ ::freeze_on_t_i:S-1.000000C9�    % ::freeze_off_t_i:S-1.000000CA�    ( ::no_freeze_command:S-1.0000011B   # ::freeze_on_go:S-1.00000078x    $ ::freeze_off_go:S-1.00000079y    % ::freeze_on_t_go:S-1.0000007Az    & ::freeze_off_t_go:S-1.0000007B{    + ::no_freeze_command_go:S-1.0000011C   " ::poll_freeze:S-1.000000AD�    $ ::video_mute_in:S-1.000001EF�  . ::from_device$_video_mute:S-1.000001EE�  ( ::video_mute_off_in:S-1.0000018A�   ' ::video_mute_on_in:S-1.00000189�   ) ::video_mute_on_in_m:S-1.000001BB�   * ::video_mute_off_in_m:S-1.000001BC�   * ::from_device$_freeze:S-1.000001F0�    ::freeze_in:S-1.000001F1�  $ ::freeze_off_in:S-1.0000018C�   # ::freeze_on_in:S-1.0000018B�   % ::freeze_on_in_m:S-1.000001BD�   & ::freeze_off_in_m:S-1.000001BE�   , ::Aspect_Ratio_Normal_i:S-1.000000CB�    0 ::Aspect_Ratio_Dot_by_Dot_i:S-1.000000CC�    , ::Aspect_Ratio_Border_i:S-1.000000CD�    - ::Aspect_Ratio_Stretch_i:S-1.000000CE�    * ::poll_input_1_aspect:S-1.000000AE�    * ::poll_input_2_aspect:S-1.000000AF�    * ::poll_input_3_aspect:S-1.000000B0�    * ::poll_input_4_aspect:S-1.000000B1�    2 ::from_device$_input_1_aspect:S-1.000001F2�  ( ::input_1_aspect_in:S-1.000001F3�  / ::input_1_aspect_normal_in:S-1.0000018D�   3 ::input_1_aspect_dot_by_dot_in:S-1.0000018E�   / ::input_1_aspect_border_in:S-1.0000018F�   0 ::input_1_aspect_stretch_in:S-1.00000190�   1 ::input_1_aspect_normal_in_m:S-1.000001BF�   5 ::input_1_aspect_dot_by_dot_in_m:S-1.000001C0�   1 ::input_1_aspect_border_in_m:S-1.000001C1�   2 ::input_1_aspect_stretch_in_m:S-1.000001C2�   . ::input_1_aspect_normal_i:S-1.00000124$   2 ::input_1_aspect_dot_by_dot_i:S-1.00000125%   . ::input_1_aspect_border_i:S-1.00000126&   / ::input_1_aspect_stretch_i:S-1.00000127'   2 ::from_device$_input_2_aspect:S-1.000001F4�  ( ::input_2_aspect_in:S-1.000001F5�  / ::input_2_aspect_normal_in:S-1.00000191�   3 ::input_2_aspect_dot_by_dot_in:S-1.00000192�   / ::input_2_aspect_border_in:S-1.00000193�   0 ::input_2_aspect_stretch_in:S-1.00000194�   1 ::input_2_aspect_normal_in_m:S-1.000001C3�   5 ::input_2_aspect_dot_by_dot_in_m:S-1.000001C4�   1 ::input_2_aspect_border_in_m:S-1.000001C5�   2 ::input_2_aspect_stretch_in_m:S-1.000001C6�   . ::input_2_aspect_normal_i:S-1.00000128(   2 ::input_2_aspect_dot_by_dot_i:S-1.00000129)   . ::input_2_aspect_border_i:S-1.0000012A*   / ::input_2_aspect_stretch_i:S-1.0000012B+   2 ::from_device$_input_3_aspect:S-1.000001F6�  ( ::input_3_aspect_in:S-1.000001F7�  / ::input_3_aspect_normal_in:S-1.00000195�   3 ::input_3_aspect_dot_by_dot_in:S-1.00000196�   / ::input_3_aspect_border_in:S-1.00000197�   0 ::input_3_aspect_stretch_in:S-1.00000198�   1 ::input_3_aspect_normal_in_m:S-1.000001C7�   5 ::input_3_aspect_dot_by_dot_in_m:S-1.000001C8�   1 ::input_3_aspect_border_in_m:S-1.000001C9�   2 ::input_3_aspect_stretch_in_m:S-1.000001CA�   . ::input_3_aspect_normal_i:S-1.0000012C,   2 ::input_3_aspect_dot_by_dot_i:S-1.0000012D-   . ::input_3_aspect_border_i:S-1.0000012E.   / ::input_3_aspect_stretch_i:S-1.0000012F/   2 ::from_device$_input_4_aspect:S-1.000001F8�  ( ::input_4_aspect_in:S-1.000001F9�  / ::input_4_aspect_normal_in:S-1.00000199�   3 ::input_4_aspect_dot_by_dot_in:S-1.0000019A�   / ::input_4_aspect_border_in:S-1.0000019B�   0 ::input_4_aspect_stretch_in:S-1.0000019C�   1 ::input_4_aspect_normal_in_m:S-1.000001CB�   5 ::input_4_aspect_dot_by_dot_in_m:S-1.000001CC�   1 ::input_4_aspect_border_in_m:S-1.000001CD�   2 ::input_4_aspect_stretch_in_m:S-1.000001CE�   . ::input_4_aspect_normal_i:S-1.000001300   2 ::input_4_aspect_dot_by_dot_i:S-1.000001311   . ::input_4_aspect_border_i:S-1.000001322   / ::input_4_aspect_stretch_i:S-1.000001333   ) ::clear_aspect_ilock:S-1.0000011D   & ::no_aspect_ratio:S-1.0000011E   ) ::no_aspect_ratio_go:S-1.00000123#   - ::Aspect_Ratio_Normal_go:S-1.0000011F   1 ::Aspect_Ratio_Dot_by_Dot_go:S-1.00000120    - ::Aspect_Ratio_Border_go:S-1.00000121!   . ::Aspect_Ratio_Stretch_go:S-1.00000122"   5 ::Aspect_Ratio_Normal_go_input_1:S-1.0000007C|    9 ::Aspect_Ratio_Dot_by_Dot_go_input_1:S-1.0000007D}    5 ::Aspect_Ratio_Border_go_input_1:S-1.0000007E~    6 ::Aspect_Ratio_Stretch_go_input_1:S-1.0000007F    / ::clear_picture_mode_ilock:S-1.000001344   5 ::Aspect_Ratio_Normal_go_input_2:S-1.00000080�    9 ::Aspect_Ratio_Dot_by_Dot_go_input_2:S-1.00000081�    5 ::Aspect_Ratio_Border_go_input_2:S-1.00000082�    6 ::Aspect_Ratio_Stretch_go_input_2:S-1.00000083�    . ::Picture_Mode_Standard_i:S-1.000000CF�    5 ::Aspect_Ratio_Normal_go_input_3:S-1.00000084�    9 ::Aspect_Ratio_Dot_by_Dot_go_input_3:S-1.00000085�    5 ::Aspect_Ratio_Border_go_input_3:S-1.00000086�    6 ::Aspect_Ratio_Stretch_go_input_3:S-1.00000087�    2 ::Picture_Mode_Presentation_i:S-1.000000D0�    5 ::Aspect_Ratio_Normal_go_input_4:S-1.00000088�    9 ::Aspect_Ratio_Dot_by_Dot_go_input_4:S-1.00000089�    5 ::Aspect_Ratio_Border_go_input_4:S-1.0000008A�    6 ::Aspect_Ratio_Stretch_go_input_4:S-1.0000008B�    , ::Picture_Mode_Cinema_i:S-1.000000D1�    * ::Picture_Mode_Game_i:S-1.000000D2�    . ::no_picture_mode_command:S-1.000001355   / ::Picture_Mode_Standard_go:S-1.000001366   3 ::Picture_Mode_Presentation_go:S-1.000001377   - ::Picture_Mode_Cinema_go:S-1.000001388   + ::Picture_Mode_Game_go:S-1.000001399   1 ::no_picture_mode_command_go:S-1.0000013A:   7 ::Picture_Mode_Standard_go_input_1:S-1.0000008C�    ; ::Picture_Mode_Presentation_go_input_1:S-1.0000008D�    5 ::Picture_Mode_Cinema_go_input_1:S-1.0000008E�    3 ::Picture_Mode_Game_go_input_1:S-1.0000008F�    7 ::Picture_Mode_Standard_go_input_2:S-1.00000090�    ; ::Picture_Mode_Presentation_go_input_2:S-1.00000091�    5 ::Picture_Mode_Cinema_go_input_2:S-1.00000092�    3 ::Picture_Mode_Game_go_input_2:S-1.00000093�    7 ::Picture_Mode_Standard_go_input_3:S-1.00000094�    ; ::Picture_Mode_Presentation_go_input_3:S-1.00000095�    5 ::Picture_Mode_Cinema_go_input_3:S-1.00000096�    3 ::Picture_Mode_Game_go_input_3:S-1.00000097�    7 ::Picture_Mode_Standard_go_input_4:S-1.00000098�    ; ::Picture_Mode_Presentation_go_input_4:S-1.00000099�    5 ::Picture_Mode_Cinema_go_input_4:S-1.0000009A�    3 ::Picture_Mode_Game_go_input_4:S-1.0000009B�    0 ::poll_input_1_picture_mode:S-1.000000B2�    0 ::poll_input_2_picture_mode:S-1.000000B3�    0 ::poll_input_3_picture_mode:S-1.000000B4�    0 ::poll_input_4_picture_mode:S-1.000000B5�    3 ::from_device$_input_1_picture:S-1.000001FA�  ) ::input_1_picture_in:S-1.000001FB�  . ::input_1_presentation_in:S-1.0000019E�   * ::input_1_standard_in:S-1.0000019D�   ( ::input_1_cinema_in:S-1.0000019F�   & ::input_1_game_in:S-1.000001A0�   , ::input_1_standard_in_m:S-1.000001CF�   0 ::input_1_presentation_in_m:S-1.000001D0�   * ::input_1_cinema_in_m:S-1.000001D1�   ( ::input_1_game_in_m:S-1.000001D2�   ) ::input_1_standard_i:S-1.0000013B;   - ::input_1_presentation_i:S-1.0000013C<   ' ::input_1_cinema_i:S-1.0000013D=   % ::input_1_game_i:S-1.0000013E>   3 ::from_device$_input_2_picture:S-1.000001FC�  ) ::input_2_picture_in:S-1.000001FD�  * ::input_2_standard_in:S-1.000001A1�   . ::input_2_presentation_in:S-1.000001A2�   ( ::input_2_cinema_in:S-1.000001A3�   & ::input_2_game_in:S-1.000001A4�   , ::input_2_standard_in_m:S-1.000001D3�   0 ::input_2_presentation_in_m:S-1.000001D4�   * ::input_2_cinema_in_m:S-1.000001D5�   ( ::input_2_game_in_m:S-1.000001D6�   ) ::input_2_standard_i:S-1.0000013F?   - ::input_2_presentation_i:S-1.00000140@   ' ::input_2_cinema_i:S-1.00000141A   % ::input_2_game_i:S-1.00000142B   3 ::from_device$_input_3_picture:S-1.000001FE�  ) ::input_3_picture_in:S-1.000001FF�  * ::input_3_standard_in:S-1.000001A5�   . ::input_3_presentation_in:S-1.000001A6�   ( ::input_3_cinema_in:S-1.000001A7�   & ::input_3_game_in:S-1.000001A8�   , ::input_3_standard_in_m:S-1.000001D7�   0 ::input_3_presentation_in_m:S-1.000001D8�   * ::input_3_cinema_in_m:S-1.000001D9�   ( ::input_3_game_in_m:S-1.000001DA�   ) ::input_3_standard_i:S-1.00000143C   - ::input_3_presentation_i:S-1.00000144D   ' ::input_3_cinema_i:S-1.00000145E   % ::input_3_game_i:S-1.00000146F   3 ::from_device$_input_4_picture:S-1.00000200   ) ::input_4_picture_in:S-1.00000201  * ::input_4_standard_in:S-1.000001A9�   . ::input_4_presentation_in:S-1.000001AA�   ( ::input_4_cinema_in:S-1.000001AB�   & ::input_4_game_in:S-1.000001AC�   , ::input_4_standard_in_m:S-1.000001DB�   0 ::input_4_presentation_in_m:S-1.000001DC�   * ::input_4_cinema_in_m:S-1.000001DD�   ( ::input_4_game_in_m:S-1.000001DE�   ) ::input_4_standard_i:S-1.00000147G   - ::input_4_presentation_i:S-1.00000148H   ' ::input_4_cinema_i:S-1.00000149I   % ::input_4_game_i:S-1.0000014AJ   0 ::Auto_Power_Off_Enable_Fb*:S-1.0000014BK   1 ::Auto_Power_Off_Disable_Fb*:S-1.0000014DM   . ::Auto_Power_Off_Toggle_t:S-1.0000014FO   / ::auto_power_off_enable_bf:S-1.0000014CL   0 ::auto_power_off_disable_bf:S-1.0000014EN   1 ::auto_power_off_enable_t_bf:S-1.00000150P   2 ::auto_power_off_disable_t_bf:S-1.00000151Q   - ::clear_auto_power_ilock:S-1.00000152R   . ::auto_power_off_enable_i:S-1.000000D3�    / ::auto_power_off_disable_i:S-1.000000D4�    0 ::auto_power_off_enable_t_i:S-1.000000D5�    1 ::auto_power_off_disable_t_i:S-1.000000D6�    , ::no_auto_power_command:S-1.00000153S   / ::auto_power_off_enable_go:S-1.0000009C�    0 ::auto_power_off_disable_go:S-1.0000009D�    1 ::auto_power_off_enable_t_go:S-1.0000009E�    2 ::auto_power_off_disable_t_go:S-1.0000009F�    / ::no_auto_power_command_go:S-1.00000154T   & ::poll_auto_power:S-1.000000B6�    . ::from_device$_auto_power:S-1.00000202  $ ::auto_power_in:S-1.00000203  , ::auto_power_disable_in:S-1.000001AE�   + ::auto_power_enable_in:S-1.000001AD�   - ::auto_power_enable_in_m:S-1.000001DF�   . ::auto_power_disable_in_m:S-1.000001E0�   0 ::Economy_Mode_Standard_Fb*:S-1.00000155U   1 ::Economy_Mode_Low_Power_Fb*:S-1.00000157W   , ::Economy_Mode_Toggle_t:S-1.00000159Y   / ::economy_mode_standard_bf:S-1.00000156V   * ::economy_mode_low_bf:S-1.00000158X   1 ::economy_mode_standard_t_bf:S-1.0000015AZ   , ::economy_mode_low_t_bf:S-1.0000015B[   . ::economy_mode_standard_i:S-1.000000D7�    ) ::economy_mode_low_i:S-1.000000D8�    0 ::economy_mode_standard_t_i:S-1.000000D9�    + ::economy_mode_low_t_i:S-1.000000DA�    / ::clear_economy_mode_ilock:S-1.0000015C\   . ::no_economy_mode_command:S-1.0000015D]   / ::economy_mode_standard_go:S-1.000000A0�    * ::economy_mode_low_go:S-1.000000A1�    1 ::economy_mode_standard_t_go:S-1.000000A2�    , ::economy_mode_low_t_go:S-1.000000A3�    1 ::no_economy_mode_command_go:S-1.0000015E^   ( ::poll_economy_mode:S-1.000000B7�    + ::from_device$_economy:S-1.00000204  & ::economy_mode_in:S-1.00000205  / ::economy_mode_standard_in:S-1.000001AF�   * ::economy_mode_low_in:S-1.000001B0�   1 ::economy_mode_standard_in_m:S-1.000001E1�   , ::economy_mode_low_in_m:S-1.000001E2�     ::poll_seed:S-1.0000017F  " ::poll_signal:S-1.000000A9�    # ::no_signal_in:S-1.000001B1�   * ::from_device$_signal:S-1.00000206    ::signal_in:S-1.000001B2�   % ::no_signal_in_m:S-1.000001E3�   " ::signal_in_m:S-1.000001E4�   ! ::power_sent:S-1.000000E8�    $ ::poll_power_or:S-1.000001E7�   & ::poll_lamp_hours:S-1.000000B8�    ) ::Volume_Mute_On_Fb*:S-1.0000015F_   * ::Volume_Mute_Off_Fb*:S-1.00000161a   ) ::volume_mute_off_bf:S-1.00000162b   ( ::volume_mute_on_bf:S-1.00000160`   + ::Volume_Mute_Toggle_t:S-1.00000163c   * ::volume_mute_on_t_bf:S-1.00000164d   + ::volume_mute_off_t_bf:S-1.00000165e   ' ::volume_mute_on_i:S-1.000000DB�    ( ::volume_mute_off_i:S-1.000000DC�    ) ::volume_mute_on_t_i:S-1.000000DD�    * ::volume_mute_off_t_i:S-1.000000DE�    . ::clear_volume_mute_ilock:S-1.00000166f   + ::volume_mute_off_t_go:S-1.0000016Bk   0 ::no_volume_mute_command_go:S-1.0000016Cl   - ::no_volume_mute_command:S-1.00000167g   ( ::Volume_Mute_On_go:S-1.00000168h   ) ::Volume_Mute_Off_go:S-1.00000169i   * ::volume_mute_on_t_go:S-1.0000016Aj   % ::Speaker_On_Fb*:S-1.0000016Fo   & ::Speaker_Off_Fb*:S-1.00000171q   ' ::Speaker_Toggle_t:S-1.00000173s   $ ::speaker_on_bf:S-1.00000170p   % ::speaker_off_bf:S-1.00000172r   & ::speaker_on_t_bf:S-1.00000174t   & ::speaer_off_t_bf:S-1.00000175u   # ::speaker_on_i:S-1.000000DF�    $ ::speaker_off_i:S-1.000000E0�    % ::speaker_on_t_i:S-1.000000E1�    & ::speaker_off_t_i:S-1.000000E2�    * ::clear_speaker_ilock:S-1.00000176v   ) ::no_speaker_command:S-1.00000177w   $ ::speaker_on_go:S-1.000000A4�    % ::speaker_off_go:S-1.000000A5�    & ::speaker_on_t_go:S-1.000000A6�    ' ::speaker_off_t_go:S-1.000000A7�    , ::no_speaker_command_go:S-1.00000178x   " ::poll_volume:S-1.000000B9�    # ::poll_speaker:S-1.000000BA�    + ::from_device$_speaker:S-1.00000207  ! ::speaker_in:S-1.00000208  $ ::speaker_on_in:S-1.000001B3�   % ::speaker_off_in:S-1.000001B4�   & ::speaker_on_in_m:S-1.000001E5�   ' ::speaker_off_in_m:S-1.000001E6�   ( ::volume_mute_on_or:S-1.0000016Dm   ) ::volume_mute_off_or:S-1.0000016En   $ ::volume_adjust:S-1.0000017D}   " ::volume_done:S-1.0000017E~   + ::no_volume_command_go:S-1.0000017C|   % ::volume_down_go:S-1.0000017B{   ( ::no_volume_command:S-1.00000179y   # ::volume_up_go:S-1.0000017Az   # ::volume_level:S-1.00000181�  % ::power_off_in_m:S-1.000001B6�   % ::send_command_t:S-1.000000E7�    5 ::from_device$_volume_lamp_hours:S-1.00000180�  & ::power_wait_done:S-1.000000EA�    ! ::input_sent:S-1.000000EB�    & ::input_wait_done:S-1.000000ED�    " ::aspect_sent:S-1.000000EE�    ! ::waits_done:S-1.000000E5�    ( ::picture_mode_sent:S-1.000000F1�    - ::picture_mode_wait_done:S-1.000000F3�    ' ::aspect_wait_done:S-1.000000F0�    & ::send_command_bf:S-1.000000E6�    " :://waiting_1:S-1.000000E9�    " :://waiting_2:S-1.000000EC�    " :://waiting_3:S-1.000000EF�    " :://waiting_4:S-1.000000F2�      ::poll_send:S-1.00000182�  	 0    �	 1   � to_device$    from_device$    power_on5     power_off6     input_17     power_toggle     input_28     input_39     input_4:     video_mute_on;     video_mute_off<     video_mute_toggle     freeze_onE     freeze_offF     freeze_toggle"     lamp_hours2    poll_srO     power_on_fb     power_off_fb     input_1_fb     input_2_fb     input_3_fb     input_4_fb     video_mute_on_fb     video_mute_off_fb     freeze_on_fb      freeze_off_fb!     speaker_onM     logo3     exit4     speaker_offN     speaker_on_fb.     speaker_toggle0     speaker_off_fb/     no_signal_fb     picture_mode_standardA    ! picture_mode_presentationB     picture_mode_cinemaC     picture_mode_gameD      picture_mode_standard_fb    $ picture_mode_presentation_fb     picture_mode_cinema_fb     picture_mode_game_fb     auto_power_enableG     auto_power_disableH     auto_power_enable_fb#     auto_power_disable_fb$     auto_power_toggle%     economy_mode_standardI     economy_mode_lowJ     economy_mode_toggle(     volume_up)     volume_down*     volume_mute_onK     volume_mute_offL     volume_mute-      economy_mode_standard_fb&     economy_mode_low_fb'     volume_bar1    volume_mute_on_fb+     volume_mute_off_fb,     aspect_normal=     aspect_dot_by_dot>     aspect_border?     aspect_stretch@     aspect_normal_fb     aspect_dot_by_dot_fb     aspect_border_fb     aspect_stretch_fb    