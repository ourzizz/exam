#############################################################################
# Makefile for building: exam
# Generated by qmake (3.0) (Qt 5.7.1)
# Project:  exam.pro
# Template: app
# Command: C:\Qt\Qt5.7.1\5.7\mingw53_32\bin\qmake.exe -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile exam.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:\Qt\Qt5.7.1\5.7\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: exam.pro ../../mkspecs/win32-g++/qmake.conf ../../mkspecs/features/spec_pre.prf \
		../../mkspecs/qdevice.pri \
		../../mkspecs/features/device_config.prf \
		../../mkspecs/common/angle.conf \
		../../mkspecs/qconfig.pri \
		../../mkspecs/modules/qt_lib_3dcore.pri \
		../../mkspecs/modules/qt_lib_3dcore_private.pri \
		../../mkspecs/modules/qt_lib_3dextras.pri \
		../../mkspecs/modules/qt_lib_3dextras_private.pri \
		../../mkspecs/modules/qt_lib_3dinput.pri \
		../../mkspecs/modules/qt_lib_3dinput_private.pri \
		../../mkspecs/modules/qt_lib_3dlogic.pri \
		../../mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../mkspecs/modules/qt_lib_3dquick.pri \
		../../mkspecs/modules/qt_lib_3dquick_private.pri \
		../../mkspecs/modules/qt_lib_3dquickextras.pri \
		../../mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../mkspecs/modules/qt_lib_3dquickinput.pri \
		../../mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../mkspecs/modules/qt_lib_3dquickrender.pri \
		../../mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../mkspecs/modules/qt_lib_3drender.pri \
		../../mkspecs/modules/qt_lib_3drender_private.pri \
		../../mkspecs/modules/qt_lib_axbase.pri \
		../../mkspecs/modules/qt_lib_axbase_private.pri \
		../../mkspecs/modules/qt_lib_axcontainer.pri \
		../../mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../mkspecs/modules/qt_lib_axserver.pri \
		../../mkspecs/modules/qt_lib_axserver_private.pri \
		../../mkspecs/modules/qt_lib_bluetooth.pri \
		../../mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../mkspecs/modules/qt_lib_charts.pri \
		../../mkspecs/modules/qt_lib_charts_private.pri \
		../../mkspecs/modules/qt_lib_clucene_private.pri \
		../../mkspecs/modules/qt_lib_concurrent.pri \
		../../mkspecs/modules/qt_lib_concurrent_private.pri \
		../../mkspecs/modules/qt_lib_core.pri \
		../../mkspecs/modules/qt_lib_core_private.pri \
		../../mkspecs/modules/qt_lib_datavisualization.pri \
		../../mkspecs/modules/qt_lib_datavisualization_private.pri \
		../../mkspecs/modules/qt_lib_dbus.pri \
		../../mkspecs/modules/qt_lib_dbus_private.pri \
		../../mkspecs/modules/qt_lib_designer.pri \
		../../mkspecs/modules/qt_lib_designer_private.pri \
		../../mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../mkspecs/modules/qt_lib_gamepad.pri \
		../../mkspecs/modules/qt_lib_gamepad_private.pri \
		../../mkspecs/modules/qt_lib_gui.pri \
		../../mkspecs/modules/qt_lib_gui_private.pri \
		../../mkspecs/modules/qt_lib_help.pri \
		../../mkspecs/modules/qt_lib_help_private.pri \
		../../mkspecs/modules/qt_lib_location.pri \
		../../mkspecs/modules/qt_lib_location_private.pri \
		../../mkspecs/modules/qt_lib_multimedia.pri \
		../../mkspecs/modules/qt_lib_multimedia_private.pri \
		../../mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../mkspecs/modules/qt_lib_network.pri \
		../../mkspecs/modules/qt_lib_network_private.pri \
		../../mkspecs/modules/qt_lib_nfc.pri \
		../../mkspecs/modules/qt_lib_nfc_private.pri \
		../../mkspecs/modules/qt_lib_opengl.pri \
		../../mkspecs/modules/qt_lib_opengl_private.pri \
		../../mkspecs/modules/qt_lib_openglextensions.pri \
		../../mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../mkspecs/modules/qt_lib_positioning.pri \
		../../mkspecs/modules/qt_lib_positioning_private.pri \
		../../mkspecs/modules/qt_lib_printsupport.pri \
		../../mkspecs/modules/qt_lib_printsupport_private.pri \
		../../mkspecs/modules/qt_lib_purchasing.pri \
		../../mkspecs/modules/qt_lib_purchasing_private.pri \
		../../mkspecs/modules/qt_lib_qml.pri \
		../../mkspecs/modules/qt_lib_qml_private.pri \
		../../mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../mkspecs/modules/qt_lib_qmltest.pri \
		../../mkspecs/modules/qt_lib_qmltest_private.pri \
		../../mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../mkspecs/modules/qt_lib_quick.pri \
		../../mkspecs/modules/qt_lib_quick_private.pri \
		../../mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../mkspecs/modules/qt_lib_quickwidgets.pri \
		../../mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../mkspecs/modules/qt_lib_script.pri \
		../../mkspecs/modules/qt_lib_script_private.pri \
		../../mkspecs/modules/qt_lib_scripttools.pri \
		../../mkspecs/modules/qt_lib_scripttools_private.pri \
		../../mkspecs/modules/qt_lib_scxml.pri \
		../../mkspecs/modules/qt_lib_scxml_private.pri \
		../../mkspecs/modules/qt_lib_sensors.pri \
		../../mkspecs/modules/qt_lib_sensors_private.pri \
		../../mkspecs/modules/qt_lib_serialbus.pri \
		../../mkspecs/modules/qt_lib_serialbus_private.pri \
		../../mkspecs/modules/qt_lib_serialport.pri \
		../../mkspecs/modules/qt_lib_serialport_private.pri \
		../../mkspecs/modules/qt_lib_sql.pri \
		../../mkspecs/modules/qt_lib_sql_private.pri \
		../../mkspecs/modules/qt_lib_svg.pri \
		../../mkspecs/modules/qt_lib_svg_private.pri \
		../../mkspecs/modules/qt_lib_testlib.pri \
		../../mkspecs/modules/qt_lib_testlib_private.pri \
		../../mkspecs/modules/qt_lib_uiplugin.pri \
		../../mkspecs/modules/qt_lib_uitools.pri \
		../../mkspecs/modules/qt_lib_uitools_private.pri \
		../../mkspecs/modules/qt_lib_webchannel.pri \
		../../mkspecs/modules/qt_lib_webchannel_private.pri \
		../../mkspecs/modules/qt_lib_websockets.pri \
		../../mkspecs/modules/qt_lib_websockets_private.pri \
		../../mkspecs/modules/qt_lib_widgets.pri \
		../../mkspecs/modules/qt_lib_widgets_private.pri \
		../../mkspecs/modules/qt_lib_winextras.pri \
		../../mkspecs/modules/qt_lib_winextras_private.pri \
		../../mkspecs/modules/qt_lib_xml.pri \
		../../mkspecs/modules/qt_lib_xml_private.pri \
		../../mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../mkspecs/features/qt_functions.prf \
		../../mkspecs/features/qt_config.prf \
		../../mkspecs/features/win32/qt_config.prf \
		../../mkspecs/win32-g++/qmake.conf \
		../../mkspecs/features/spec_post.prf \
		.qmake.stash \
		../../mkspecs/features/exclusive_builds.prf \
		../../mkspecs/features/toolchain.prf \
		../../mkspecs/features/default_pre.prf \
		../../mkspecs/features/win32/default_pre.prf \
		../../mkspecs/features/resolve_config.prf \
		../../mkspecs/features/exclusive_builds_post.prf \
		../../mkspecs/features/default_post.prf \
		../../mkspecs/features/qml_debug.prf \
		../../mkspecs/features/win32/rtti.prf \
		../../mkspecs/features/precompile_header.prf \
		../../mkspecs/features/warn_on.prf \
		../../mkspecs/features/qt.prf \
		../../mkspecs/features/resources.prf \
		../../mkspecs/features/moc.prf \
		../../mkspecs/features/win32/opengl.prf \
		../../mkspecs/features/uic.prf \
		../../mkspecs/features/file_copies.prf \
		../../mkspecs/features/win32/windows.prf \
		../../mkspecs/features/testcase_targets.prf \
		../../mkspecs/features/exceptions.prf \
		../../mkspecs/features/yacc.prf \
		../../mkspecs/features/lex.prf \
		exam.pro \
		../../lib/qtmaind.prl \
		../../lib/Qt5Widgets.prl \
		../../lib/Qt5Gui.prl \
		../../lib/Qt5Sql.prl \
		../../lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile exam.pro
../../mkspecs/features/spec_pre.prf:
../../mkspecs/qdevice.pri:
../../mkspecs/features/device_config.prf:
../../mkspecs/common/angle.conf:
../../mkspecs/qconfig.pri:
../../mkspecs/modules/qt_lib_3dcore.pri:
../../mkspecs/modules/qt_lib_3dcore_private.pri:
../../mkspecs/modules/qt_lib_3dextras.pri:
../../mkspecs/modules/qt_lib_3dextras_private.pri:
../../mkspecs/modules/qt_lib_3dinput.pri:
../../mkspecs/modules/qt_lib_3dinput_private.pri:
../../mkspecs/modules/qt_lib_3dlogic.pri:
../../mkspecs/modules/qt_lib_3dlogic_private.pri:
../../mkspecs/modules/qt_lib_3dquick.pri:
../../mkspecs/modules/qt_lib_3dquick_private.pri:
../../mkspecs/modules/qt_lib_3dquickextras.pri:
../../mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../mkspecs/modules/qt_lib_3dquickinput.pri:
../../mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../mkspecs/modules/qt_lib_3dquickrender.pri:
../../mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../mkspecs/modules/qt_lib_3drender.pri:
../../mkspecs/modules/qt_lib_3drender_private.pri:
../../mkspecs/modules/qt_lib_axbase.pri:
../../mkspecs/modules/qt_lib_axbase_private.pri:
../../mkspecs/modules/qt_lib_axcontainer.pri:
../../mkspecs/modules/qt_lib_axcontainer_private.pri:
../../mkspecs/modules/qt_lib_axserver.pri:
../../mkspecs/modules/qt_lib_axserver_private.pri:
../../mkspecs/modules/qt_lib_bluetooth.pri:
../../mkspecs/modules/qt_lib_bluetooth_private.pri:
../../mkspecs/modules/qt_lib_bootstrap_private.pri:
../../mkspecs/modules/qt_lib_charts.pri:
../../mkspecs/modules/qt_lib_charts_private.pri:
../../mkspecs/modules/qt_lib_clucene_private.pri:
../../mkspecs/modules/qt_lib_concurrent.pri:
../../mkspecs/modules/qt_lib_concurrent_private.pri:
../../mkspecs/modules/qt_lib_core.pri:
../../mkspecs/modules/qt_lib_core_private.pri:
../../mkspecs/modules/qt_lib_datavisualization.pri:
../../mkspecs/modules/qt_lib_datavisualization_private.pri:
../../mkspecs/modules/qt_lib_dbus.pri:
../../mkspecs/modules/qt_lib_dbus_private.pri:
../../mkspecs/modules/qt_lib_designer.pri:
../../mkspecs/modules/qt_lib_designer_private.pri:
../../mkspecs/modules/qt_lib_designercomponents_private.pri:
../../mkspecs/modules/qt_lib_gamepad.pri:
../../mkspecs/modules/qt_lib_gamepad_private.pri:
../../mkspecs/modules/qt_lib_gui.pri:
../../mkspecs/modules/qt_lib_gui_private.pri:
../../mkspecs/modules/qt_lib_help.pri:
../../mkspecs/modules/qt_lib_help_private.pri:
../../mkspecs/modules/qt_lib_location.pri:
../../mkspecs/modules/qt_lib_location_private.pri:
../../mkspecs/modules/qt_lib_multimedia.pri:
../../mkspecs/modules/qt_lib_multimedia_private.pri:
../../mkspecs/modules/qt_lib_multimediawidgets.pri:
../../mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../mkspecs/modules/qt_lib_network.pri:
../../mkspecs/modules/qt_lib_network_private.pri:
../../mkspecs/modules/qt_lib_nfc.pri:
../../mkspecs/modules/qt_lib_nfc_private.pri:
../../mkspecs/modules/qt_lib_opengl.pri:
../../mkspecs/modules/qt_lib_opengl_private.pri:
../../mkspecs/modules/qt_lib_openglextensions.pri:
../../mkspecs/modules/qt_lib_openglextensions_private.pri:
../../mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../mkspecs/modules/qt_lib_platformsupport_private.pri:
../../mkspecs/modules/qt_lib_positioning.pri:
../../mkspecs/modules/qt_lib_positioning_private.pri:
../../mkspecs/modules/qt_lib_printsupport.pri:
../../mkspecs/modules/qt_lib_printsupport_private.pri:
../../mkspecs/modules/qt_lib_purchasing.pri:
../../mkspecs/modules/qt_lib_purchasing_private.pri:
../../mkspecs/modules/qt_lib_qml.pri:
../../mkspecs/modules/qt_lib_qml_private.pri:
../../mkspecs/modules/qt_lib_qmldebug_private.pri:
../../mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../mkspecs/modules/qt_lib_qmltest.pri:
../../mkspecs/modules/qt_lib_qmltest_private.pri:
../../mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../mkspecs/modules/qt_lib_quick.pri:
../../mkspecs/modules/qt_lib_quick_private.pri:
../../mkspecs/modules/qt_lib_quickcontrols2.pri:
../../mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../mkspecs/modules/qt_lib_quickparticles_private.pri:
../../mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../mkspecs/modules/qt_lib_quickwidgets.pri:
../../mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../mkspecs/modules/qt_lib_script.pri:
../../mkspecs/modules/qt_lib_script_private.pri:
../../mkspecs/modules/qt_lib_scripttools.pri:
../../mkspecs/modules/qt_lib_scripttools_private.pri:
../../mkspecs/modules/qt_lib_scxml.pri:
../../mkspecs/modules/qt_lib_scxml_private.pri:
../../mkspecs/modules/qt_lib_sensors.pri:
../../mkspecs/modules/qt_lib_sensors_private.pri:
../../mkspecs/modules/qt_lib_serialbus.pri:
../../mkspecs/modules/qt_lib_serialbus_private.pri:
../../mkspecs/modules/qt_lib_serialport.pri:
../../mkspecs/modules/qt_lib_serialport_private.pri:
../../mkspecs/modules/qt_lib_sql.pri:
../../mkspecs/modules/qt_lib_sql_private.pri:
../../mkspecs/modules/qt_lib_svg.pri:
../../mkspecs/modules/qt_lib_svg_private.pri:
../../mkspecs/modules/qt_lib_testlib.pri:
../../mkspecs/modules/qt_lib_testlib_private.pri:
../../mkspecs/modules/qt_lib_uiplugin.pri:
../../mkspecs/modules/qt_lib_uitools.pri:
../../mkspecs/modules/qt_lib_uitools_private.pri:
../../mkspecs/modules/qt_lib_webchannel.pri:
../../mkspecs/modules/qt_lib_webchannel_private.pri:
../../mkspecs/modules/qt_lib_websockets.pri:
../../mkspecs/modules/qt_lib_websockets_private.pri:
../../mkspecs/modules/qt_lib_widgets.pri:
../../mkspecs/modules/qt_lib_widgets_private.pri:
../../mkspecs/modules/qt_lib_winextras.pri:
../../mkspecs/modules/qt_lib_winextras_private.pri:
../../mkspecs/modules/qt_lib_xml.pri:
../../mkspecs/modules/qt_lib_xml_private.pri:
../../mkspecs/modules/qt_lib_xmlpatterns.pri:
../../mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../mkspecs/features/qt_functions.prf:
../../mkspecs/features/qt_config.prf:
../../mkspecs/features/win32/qt_config.prf:
../../mkspecs/win32-g++/qmake.conf:
../../mkspecs/features/spec_post.prf:
.qmake.stash:
../../mkspecs/features/exclusive_builds.prf:
../../mkspecs/features/toolchain.prf:
../../mkspecs/features/default_pre.prf:
../../mkspecs/features/win32/default_pre.prf:
../../mkspecs/features/resolve_config.prf:
../../mkspecs/features/exclusive_builds_post.prf:
../../mkspecs/features/default_post.prf:
../../mkspecs/features/qml_debug.prf:
../../mkspecs/features/win32/rtti.prf:
../../mkspecs/features/precompile_header.prf:
../../mkspecs/features/warn_on.prf:
../../mkspecs/features/qt.prf:
../../mkspecs/features/resources.prf:
../../mkspecs/features/moc.prf:
../../mkspecs/features/win32/opengl.prf:
../../mkspecs/features/uic.prf:
../../mkspecs/features/file_copies.prf:
../../mkspecs/features/win32/windows.prf:
../../mkspecs/features/testcase_targets.prf:
../../mkspecs/features/exceptions.prf:
../../mkspecs/features/yacc.prf:
../../mkspecs/features/lex.prf:
exam.pro:
../../lib/qtmaind.prl:
../../lib/Qt5Widgets.prl:
../../lib/Qt5Gui.prl:
../../lib/Qt5Sql.prl:
../../lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile exam.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
