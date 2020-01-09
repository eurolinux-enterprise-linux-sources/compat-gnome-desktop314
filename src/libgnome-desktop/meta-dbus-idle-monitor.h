/*
 * Generated by gdbus-codegen 2.42.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __META_DBUS_IDLE_MONITOR_H__
#define __META_DBUS_IDLE_MONITOR_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Mutter.IdleMonitor */

#define META_DBUS_TYPE_IDLE_MONITOR (meta_dbus_idle_monitor_get_type ())
#define META_DBUS_IDLE_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_IDLE_MONITOR, MetaDBusIdleMonitor))
#define META_DBUS_IS_IDLE_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_IDLE_MONITOR))
#define META_DBUS_IDLE_MONITOR_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), META_DBUS_TYPE_IDLE_MONITOR, MetaDBusIdleMonitorIface))

struct _MetaDBusIdleMonitor;
typedef struct _MetaDBusIdleMonitor MetaDBusIdleMonitor;
typedef struct _MetaDBusIdleMonitorIface MetaDBusIdleMonitorIface;

struct _MetaDBusIdleMonitorIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_add_idle_watch) (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation,
    guint64 arg_interval);

  gboolean (*handle_add_user_active_watch) (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_idletime) (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_remove_watch) (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation,
    guint arg_id);

  void (*watch_fired) (
    MetaDBusIdleMonitor *object,
    guint arg_id);

};

GType meta_dbus_idle_monitor_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *meta_dbus_idle_monitor_interface_info (void);
guint meta_dbus_idle_monitor_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void meta_dbus_idle_monitor_complete_get_idletime (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation,
    guint64 idletime);

void meta_dbus_idle_monitor_complete_add_idle_watch (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation,
    guint id);

void meta_dbus_idle_monitor_complete_add_user_active_watch (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation,
    guint id);

void meta_dbus_idle_monitor_complete_remove_watch (
    MetaDBusIdleMonitor *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void meta_dbus_idle_monitor_emit_watch_fired (
    MetaDBusIdleMonitor *object,
    guint arg_id);



/* D-Bus method calls: */
void meta_dbus_idle_monitor_call_get_idletime (
    MetaDBusIdleMonitor *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_idle_monitor_call_get_idletime_finish (
    MetaDBusIdleMonitor *proxy,
    guint64 *out_idletime,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_idle_monitor_call_get_idletime_sync (
    MetaDBusIdleMonitor *proxy,
    guint64 *out_idletime,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_idle_monitor_call_add_idle_watch (
    MetaDBusIdleMonitor *proxy,
    guint64 arg_interval,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_idle_monitor_call_add_idle_watch_finish (
    MetaDBusIdleMonitor *proxy,
    guint *out_id,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_idle_monitor_call_add_idle_watch_sync (
    MetaDBusIdleMonitor *proxy,
    guint64 arg_interval,
    guint *out_id,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_idle_monitor_call_add_user_active_watch (
    MetaDBusIdleMonitor *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_idle_monitor_call_add_user_active_watch_finish (
    MetaDBusIdleMonitor *proxy,
    guint *out_id,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_idle_monitor_call_add_user_active_watch_sync (
    MetaDBusIdleMonitor *proxy,
    guint *out_id,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_idle_monitor_call_remove_watch (
    MetaDBusIdleMonitor *proxy,
    guint arg_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_idle_monitor_call_remove_watch_finish (
    MetaDBusIdleMonitor *proxy,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_idle_monitor_call_remove_watch_sync (
    MetaDBusIdleMonitor *proxy,
    guint arg_id,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define META_DBUS_TYPE_IDLE_MONITOR_PROXY (meta_dbus_idle_monitor_proxy_get_type ())
#define META_DBUS_IDLE_MONITOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_IDLE_MONITOR_PROXY, MetaDBusIdleMonitorProxy))
#define META_DBUS_IDLE_MONITOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_IDLE_MONITOR_PROXY, MetaDBusIdleMonitorProxyClass))
#define META_DBUS_IDLE_MONITOR_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_IDLE_MONITOR_PROXY, MetaDBusIdleMonitorProxyClass))
#define META_DBUS_IS_IDLE_MONITOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_IDLE_MONITOR_PROXY))
#define META_DBUS_IS_IDLE_MONITOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_IDLE_MONITOR_PROXY))

typedef struct _MetaDBusIdleMonitorProxy MetaDBusIdleMonitorProxy;
typedef struct _MetaDBusIdleMonitorProxyClass MetaDBusIdleMonitorProxyClass;
typedef struct _MetaDBusIdleMonitorProxyPrivate MetaDBusIdleMonitorProxyPrivate;

struct _MetaDBusIdleMonitorProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  MetaDBusIdleMonitorProxyPrivate *priv;
};

struct _MetaDBusIdleMonitorProxyClass
{
  GDBusProxyClass parent_class;
};

GType meta_dbus_idle_monitor_proxy_get_type (void) G_GNUC_CONST;

void meta_dbus_idle_monitor_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MetaDBusIdleMonitor *meta_dbus_idle_monitor_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
MetaDBusIdleMonitor *meta_dbus_idle_monitor_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void meta_dbus_idle_monitor_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MetaDBusIdleMonitor *meta_dbus_idle_monitor_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
MetaDBusIdleMonitor *meta_dbus_idle_monitor_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define META_DBUS_TYPE_IDLE_MONITOR_SKELETON (meta_dbus_idle_monitor_skeleton_get_type ())
#define META_DBUS_IDLE_MONITOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_IDLE_MONITOR_SKELETON, MetaDBusIdleMonitorSkeleton))
#define META_DBUS_IDLE_MONITOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_IDLE_MONITOR_SKELETON, MetaDBusIdleMonitorSkeletonClass))
#define META_DBUS_IDLE_MONITOR_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_IDLE_MONITOR_SKELETON, MetaDBusIdleMonitorSkeletonClass))
#define META_DBUS_IS_IDLE_MONITOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_IDLE_MONITOR_SKELETON))
#define META_DBUS_IS_IDLE_MONITOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_IDLE_MONITOR_SKELETON))

typedef struct _MetaDBusIdleMonitorSkeleton MetaDBusIdleMonitorSkeleton;
typedef struct _MetaDBusIdleMonitorSkeletonClass MetaDBusIdleMonitorSkeletonClass;
typedef struct _MetaDBusIdleMonitorSkeletonPrivate MetaDBusIdleMonitorSkeletonPrivate;

struct _MetaDBusIdleMonitorSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  MetaDBusIdleMonitorSkeletonPrivate *priv;
};

struct _MetaDBusIdleMonitorSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType meta_dbus_idle_monitor_skeleton_get_type (void) G_GNUC_CONST;

MetaDBusIdleMonitor *meta_dbus_idle_monitor_skeleton_new (void);


/* ---- */

#define META_DBUS_TYPE_OBJECT (meta_dbus_object_get_type ())
#define META_DBUS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_OBJECT, MetaDBusObject))
#define META_DBUS_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_OBJECT))
#define META_DBUS_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), META_DBUS_TYPE_OBJECT, MetaDBusObject))

struct _MetaDBusObject;
typedef struct _MetaDBusObject MetaDBusObject;
typedef struct _MetaDBusObjectIface MetaDBusObjectIface;

struct _MetaDBusObjectIface
{
  GTypeInterface parent_iface;
};

GType meta_dbus_object_get_type (void) G_GNUC_CONST;

MetaDBusIdleMonitor *meta_dbus_object_get_idle_monitor (MetaDBusObject *object);
MetaDBusIdleMonitor *meta_dbus_object_peek_idle_monitor (MetaDBusObject *object);

#define META_DBUS_TYPE_OBJECT_PROXY (meta_dbus_object_proxy_get_type ())
#define META_DBUS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_OBJECT_PROXY, MetaDBusObjectProxy))
#define META_DBUS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_OBJECT_PROXY, MetaDBusObjectProxyClass))
#define META_DBUS_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_OBJECT_PROXY, MetaDBusObjectProxyClass))
#define META_DBUS_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_OBJECT_PROXY))
#define META_DBUS_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_OBJECT_PROXY))

typedef struct _MetaDBusObjectProxy MetaDBusObjectProxy;
typedef struct _MetaDBusObjectProxyClass MetaDBusObjectProxyClass;
typedef struct _MetaDBusObjectProxyPrivate MetaDBusObjectProxyPrivate;

struct _MetaDBusObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  MetaDBusObjectProxyPrivate *priv;
};

struct _MetaDBusObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType meta_dbus_object_proxy_get_type (void) G_GNUC_CONST;
MetaDBusObjectProxy *meta_dbus_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define META_DBUS_TYPE_OBJECT_SKELETON (meta_dbus_object_skeleton_get_type ())
#define META_DBUS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_OBJECT_SKELETON, MetaDBusObjectSkeleton))
#define META_DBUS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_OBJECT_SKELETON, MetaDBusObjectSkeletonClass))
#define META_DBUS_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_OBJECT_SKELETON, MetaDBusObjectSkeletonClass))
#define META_DBUS_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_OBJECT_SKELETON))
#define META_DBUS_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_OBJECT_SKELETON))

typedef struct _MetaDBusObjectSkeleton MetaDBusObjectSkeleton;
typedef struct _MetaDBusObjectSkeletonClass MetaDBusObjectSkeletonClass;
typedef struct _MetaDBusObjectSkeletonPrivate MetaDBusObjectSkeletonPrivate;

struct _MetaDBusObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  MetaDBusObjectSkeletonPrivate *priv;
};

struct _MetaDBusObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType meta_dbus_object_skeleton_get_type (void) G_GNUC_CONST;
MetaDBusObjectSkeleton *meta_dbus_object_skeleton_new (const gchar *object_path);
void meta_dbus_object_skeleton_set_idle_monitor (MetaDBusObjectSkeleton *object, MetaDBusIdleMonitor *interface_);

/* ---- */

#define META_DBUS_TYPE_OBJECT_MANAGER_CLIENT (meta_dbus_object_manager_client_get_type ())
#define META_DBUS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_OBJECT_MANAGER_CLIENT, MetaDBusObjectManagerClient))
#define META_DBUS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_OBJECT_MANAGER_CLIENT, MetaDBusObjectManagerClientClass))
#define META_DBUS_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_OBJECT_MANAGER_CLIENT, MetaDBusObjectManagerClientClass))
#define META_DBUS_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_OBJECT_MANAGER_CLIENT))
#define META_DBUS_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _MetaDBusObjectManagerClient MetaDBusObjectManagerClient;
typedef struct _MetaDBusObjectManagerClientClass MetaDBusObjectManagerClientClass;
typedef struct _MetaDBusObjectManagerClientPrivate MetaDBusObjectManagerClientPrivate;

struct _MetaDBusObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  MetaDBusObjectManagerClientPrivate *priv;
};

struct _MetaDBusObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

GType meta_dbus_object_manager_client_get_type (void) G_GNUC_CONST;

GType meta_dbus_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void meta_dbus_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *meta_dbus_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *meta_dbus_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void meta_dbus_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *meta_dbus_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *meta_dbus_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __META_DBUS_IDLE_MONITOR_H__ */
