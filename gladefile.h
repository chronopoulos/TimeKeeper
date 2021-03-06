#ifndef gladefile_h
#define gladefile_h

static const char *gladefile = 
R"(<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE glade-interface SYSTEM "glade-2.0.dtd">
<!--*- mode: xml -*-->
<glade-interface>
  <widget class="GtkWindow" id="TimeLogMain">
    <property name="visible">True</property>
    <property name="title" translatable="yes">TimeKeeper</property>
    <property name="default_width">400</property>
    <property name="default_height">200</property>
    <signal name="destroy" handler="on_TimeLogMain_destroy"/>
    <signal name="destroy_event" handler="on_TimeLogMain_destroy"/>
    <signal name="delete_event" handler="on_TimeLogMain_delete_event"/>
    <child>
      <widget class="GtkVBox" id="vbox1">
        <property name="visible">True</property>
        <child>
          <widget class="GtkMenuBar" id="menubar1">
            <property name="visible">True</property>
            <child>
              <widget class="GtkMenuItem" id="menuitem7">
                <property name="visible">True</property>
                <property name="label" translatable="yes">_File</property>
                <property name="use_underline">True</property>
                <child>
                  <widget class="GtkMenu" id="menu7">
                    <child>
                      <widget class="GtkImageMenuItem" id="new1">
                        <property name="visible">True</property>
                        <property name="label">gtk-new</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_new1_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="open1">
                        <property name="visible">True</property>
                        <property name="label">gtk-open</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_open1_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="save1">
                        <property name="visible">True</property>
                        <property name="label">gtk-save</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_save1_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="save_as1">
                        <property name="visible">True</property>
                        <property name="label">gtk-save-as</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_save_as1_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkSeparatorMenuItem" id="separatormenuitem1">
                        <property name="visible">True</property>
                        <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkMenuItem" id="tab_delimited_export">
                        <property name="visible">True</property>
                        <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                        <property name="label" translatable="yes">Tab Delimited Export...</property>
                        <property name="use_underline">True</property>
                        <signal name="activate" handler="on_tab_delimited_export_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkMenuItem" id="time_report">
                        <property name="visible">True</property>
                        <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                        <property name="label" translatable="yes">Time Report...</property>
                        <property name="use_underline">True</property>
                        <signal name="activate" handler="on_time_report_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkSeparatorMenuItem" id="separatormenuitem2">
                        <property name="visible">True</property>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="quit1">
                        <property name="visible">True</property>
                        <property name="label">gtk-quit</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_quit1_activate"/>
                      </widget>
                    </child>
                  </widget>
                </child>
              </widget>
            </child>
            <child>
              <widget class="GtkMenuItem" id="menuitem8">
                <property name="visible">True</property>
                <property name="label" translatable="yes">_Edit</property>
                <property name="use_underline">True</property>
                <child>
                  <widget class="GtkMenu" id="menu8">
                    <child>
                      <widget class="GtkImageMenuItem" id="cut1">
                        <property name="visible">True</property>
                        <property name="label">gtk-cut</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="copy1">
                        <property name="visible">True</property>
                        <property name="label">gtk-copy</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="paste1">
                        <property name="visible">True</property>
                        <property name="label">gtk-paste</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkImageMenuItem" id="delete1">
                        <property name="visible">True</property>
                        <property name="label">gtk-delete</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                        <signal name="activate" handler="on_delete1_activate"/>
                        <accelerator key="D" modifiers="GDK_CONTROL_MASK" signal="activate"/>
                      </widget>
                    </child>
                  </widget>
                </child>
              </widget>
            </child>
            <child>
              <widget class="GtkMenuItem" id="menuview">
                <property name="visible">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <property name="label" translatable="yes">_View</property>
                <property name="use_underline">True</property>
                <child>
                  <widget class="GtkMenu" id="menu1">
                    <property name="visible">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                    <child>
                      <widget class="GtkMenuItem" id="reg_hours">
                        <property name="visible">True</property>
                        <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                        <property name="label" translatable="yes">Regular Hours</property>
                        <property name="use_underline">True</property>
                        <signal name="activate" handler="on_reg_hours_activate"/>
                      </widget>
                    </child>
                    <child>
                      <widget class="GtkMenuItem" id="dec_hours">
                        <property name="visible">True</property>
                        <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                        <property name="label" translatable="yes">Decimal Hours</property>
                        <property name="use_underline">True</property>
                        <signal name="activate" handler="on_dec_hours_activate"/>
                      </widget>
                    </child>
                  </widget>
                </child>
              </widget>
            </child>
            <child>
              <widget class="GtkMenuItem" id="menuitem10">
                <property name="visible">True</property>
                <property name="label" translatable="yes">_Help</property>
                <property name="use_underline">True</property>
                <child>
                  <widget class="GtkMenu" id="menu10">
                    <child>
                      <widget class="GtkMenuItem" id="about1">
                        <property name="visible">True</property>
                        <property name="label" translatable="yes">_About</property>
                        <property name="use_underline">True</property>
                        <signal name="activate" handler="on_about1_activate"/>
                      </widget>
                    </child>
                  </widget>
                </child>
              </widget>
            </child>
          </widget>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
          </packing>
        </child>
        <child>
          <widget class="GtkScrolledWindow" id="scrolledwindow1">
            <property name="visible">True</property>
            <property name="can_focus">True</property>
            <property name="shadow_type">GTK_SHADOW_IN</property>
            <child>
              <widget class="GtkTreeView" id="mGtvTimeLog">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <signal name="key_release_event" handler="on_mGtvTimeLog_key_release_event"/>
              </widget>
            </child>
          </widget>
          <packing>
            <property name="position">1</property>
          </packing>
        </child>
        <child>
          <widget class="GtkHBox" id="hbox1">
            <property name="visible">True</property>
            <child>
              <widget class="GtkLabel" id="label1">
                <property name="visible">True</property>
                <property name="label" translatable="yes">Current Task:</property>
              </widget>
              <packing>
                <property name="expand">False</property>
                <property name="fill">False</property>
              </packing>
            </child>
            <child>
              <widget class="GtkEntry" id="mGeTask">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="invisible_char">*</property>
              </widget>
              <packing>
                <property name="position">1</property>
              </packing>
            </child>
            <child>
              <widget class="GtkButton" id="LogIn">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="label" translatable="yes">Log In</property>
                <property name="use_underline">True</property>
                <property name="response_id">0</property>
                <signal name="clicked" handler="on_LogIn_clicked"/>
              </widget>
              <packing>
                <property name="expand">False</property>
                <property name="fill">False</property>
                <property name="position">2</property>
              </packing>
            </child>
            <child>
              <widget class="GtkButton" id="LogOut">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="label" translatable="yes">Log Out</property>
                <property name="use_underline">True</property>
                <property name="response_id">0</property>
                <signal name="clicked" handler="on_LogOut_clicked"/>
              </widget>
              <packing>
                <property name="expand">False</property>
                <property name="fill">False</property>
                <property name="position">3</property>
              </packing>
            </child>
          </widget>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
            <property name="position">2</property>
          </packing>
        </child>
      </widget>
    </child>
  </widget>
  <widget class="GtkDialog" id="ReportOptionsDialog">
    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
    <property name="border_width">5</property>
    <property name="title" translatable="yes">TimeKeeper Report Options</property>
    <property name="window_position">GTK_WIN_POS_CENTER_ON_PARENT</property>
    <property name="type_hint">GDK_WINDOW_TYPE_HINT_DIALOG</property>
    <property name="has_separator">False</property>
    <child internal-child="vbox">
      <widget class="GtkVBox" id="dialog-vbox1">
        <child>
          <widget class="GtkLabel" id="label6">
            <property name="visible">True</property>
            <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
            <property name="label" translatable="yes">Report Options:</property>
          </widget>
          <packing>
            <property name="position">1</property>
          </packing>
        </child>
        <child>
          <widget class="GtkHSeparator" id="hseparator3">
            <property name="visible">True</property>
            <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
          </widget>
          <packing>
            <property name="expand">False</property>
            <property name="position">2</property>
          </packing>
        </child>
        <child>
          <widget class="GtkHBox" id="hbox2">
            <property name="visible">True</property>
            <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
            <child>
              <widget class="GtkVBox" id="vbox2">
                <property name="visible">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <child>
                  <widget class="GtkLabel" id="label2">
                    <property name="visible">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                    <property name="label" translatable="yes">Report Datetimes:</property>
                  </widget>
                </child>
                <child>
                  <widget class="GtkLabel" id="label3">
                    <property name="visible">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                    <property name="label" translatable="yes">From:</property>
                  </widget>
                  <packing>
                    <property name="position">1</property>
                  </packing>
                </child>
                <child>
                  <widget class="GtkLabel" id="label4">
                    <property name="visible">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                    <property name="label" translatable="yes">To:</property>
                  </widget>
                  <packing>
                    <property name="position">2</property>
                  </packing>
                </child>
              </widget>
            </child>
            <child>
              <widget class="GtkVBox" id="vbox3">
                <property name="visible">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <child>
                  <widget class="GtkLabel" id="label5">
                    <property name="visible">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                  </widget>
                </child>
                <child>
                  <widget class="GtkEntry" id="mGeFrom">
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                  </widget>
                  <packing>
                    <property name="position">1</property>
                  </packing>
                </child>
                <child>
                  <widget class="GtkEntry" id="mGeTo">
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                  </widget>
                  <packing>
                    <property name="position">2</property>
                  </packing>
                </child>
              </widget>
              <packing>
                <property name="position">1</property>
              </packing>
            </child>
          </widget>
          <packing>
            <property name="position">3</property>
          </packing>
        </child>
        <child>
          <widget class="GtkHSeparator" id="hseparator1">
            <property name="visible">True</property>
            <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
          </widget>
          <packing>
            <property name="expand">False</property>
            <property name="position">4</property>
          </packing>
        </child>
        <child>
          <widget class="GtkHBox" id="hbox3">
            <property name="visible">True</property>
            <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
            <child>
              <widget class="GtkLabel" id="label7">
                <property name="visible">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <property name="label" translatable="yes">OT Threshold (hours):</property>
              </widget>
            </child>
            <child>
              <widget class="GtkEntry" id="mGeOTThreshold">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
              </widget>
              <packing>
                <property name="position">1</property>
              </packing>
            </child>
          </widget>
          <packing>
            <property name="position">5</property>
          </packing>
        </child>
        <child internal-child="action_area">
          <widget class="GtkHButtonBox" id="dialog-action_area1">
            <child>
              <widget class="GtkButton" id="mGbOk">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="receives_default">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <property name="label" translatable="yes">Ok</property>
                <property name="response_id">0</property>
                <signal name="clicked" handler="on_ReportOptions_Ok_clicked"/>
              </widget>
            </child>
            <child>
              <widget class="GtkButton" id="mGbCancel">
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="receives_default">True</property>
                <property name="events">GDK_POINTER_MOTION_MASK | GDK_POINTER_MOTION_HINT_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK</property>
                <property name="label" translatable="yes">Cancel</property>
                <property name="response_id">0</property>
                <signal name="clicked" handler="on_ReportOptions_Cancel_clicked"/>
              </widget>
              <packing>
                <property name="position">1</property>
              </packing>
            </child>
          </widget>
          <packing>
            <property name="expand">False</property>
            <property name="pack_type">GTK_PACK_END</property>
          </packing>
        </child>
      </widget>
    </child>
  </widget>
</glade-interface>)";


#endif // gladefile_h

