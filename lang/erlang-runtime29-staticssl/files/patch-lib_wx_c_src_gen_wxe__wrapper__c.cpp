--- lib/wx/c_src/gen/wxe_wrapper_7.cpp.orig     2026-09-20 15:20:40.831365000 +0000
+++ lib/wx/c_src/gen/wxe_wrapper_7.cpp  2026-09-20 15:31:35.803642000 +0000
@@ -2343,7 +2343,11 @@
   if(!enif_get_int(env, tpl[1], (int *) &kind)) Badarg("kind"); // enum
     } else        Badarg("Options");
   };
+#if wxCHECK_VERSION(3,1,6)
+  wxToolBarToolBase * Result = (wxToolBarToolBase*)This->AddTool(toolId,label,(wxBitmapBundle)*bitmap,shortHelp,kind);
+#else
   wxToolBarToolBase * Result = (wxToolBarToolBase*)This->AddTool(toolId,label,*bitmap,shortHelp,kind);
+#endif
   wxeReturn rt = wxeReturn(memenv, Ecmd.caller, true);
   rt.send(  rt.make_ref(app->getRef((void *)Result,memenv), "wx"));

