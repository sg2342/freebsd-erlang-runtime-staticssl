--- lib/wx/c_src/gen/wxe_wrapper_7.cpp.orig	2022-10-26 15:34:10.725792000 +0000
+++ lib/wx/c_src/gen/wxe_wrapper_7.cpp	2022-10-26 15:35:11.492628000 +0000
@@ -2339,7 +2339,11 @@
     } else        Badarg("Options");
   };
   if(!This) throw wxe_badarg("This");
+#if wxCHECK_VERSION(3,1,6)
+  wxToolBarToolBase * Result = (wxToolBarToolBase*)This->AddTool(toolId,label,(wxBitmapBundle)*bitmap,shortHelp,kind);
+#else < 3.1.6
   wxToolBarToolBase * Result = (wxToolBarToolBase*)This->AddTool(toolId,label,*bitmap,shortHelp,kind);
+#endif
   wxeReturn rt = wxeReturn(memenv, Ecmd.caller, true);
   rt.send(  rt.make_ref(app->getRef((void *)Result,memenv), "wx"));
 
