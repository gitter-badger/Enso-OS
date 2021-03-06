/* MonitorClone.c generated by valac 0.30.1, the Vala compiler
 * generated from MonitorClone.vala, do not modify */

/**/
/*  Copyright (C) 2014 Tom Beckmann*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <clutter/clutter.h>
#include <meta/screen.h>
#include <meta/meta-background-group.h>
#include <meta/window.h>
#include <meta/boxes.h>
#include <float.h>
#include <math.h>
#include <meta/compositor-mutter.h>
#include <meta/meta-window-actor.h>
#include <stdlib.h>
#include <string.h>


#define GALA_TYPE_MONITOR_CLONE (gala_monitor_clone_get_type ())
#define GALA_MONITOR_CLONE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_MONITOR_CLONE, GalaMonitorClone))
#define GALA_MONITOR_CLONE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_MONITOR_CLONE, GalaMonitorCloneClass))
#define GALA_IS_MONITOR_CLONE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_MONITOR_CLONE))
#define GALA_IS_MONITOR_CLONE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_MONITOR_CLONE))
#define GALA_MONITOR_CLONE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_MONITOR_CLONE, GalaMonitorCloneClass))

typedef struct _GalaMonitorClone GalaMonitorClone;
typedef struct _GalaMonitorCloneClass GalaMonitorCloneClass;
typedef struct _GalaMonitorClonePrivate GalaMonitorClonePrivate;

#define GALA_TYPE_WINDOW_CLONE_CONTAINER (gala_window_clone_container_get_type ())
#define GALA_WINDOW_CLONE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_WINDOW_CLONE_CONTAINER, GalaWindowCloneContainer))
#define GALA_WINDOW_CLONE_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_WINDOW_CLONE_CONTAINER, GalaWindowCloneContainerClass))
#define GALA_IS_WINDOW_CLONE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_WINDOW_CLONE_CONTAINER))
#define GALA_IS_WINDOW_CLONE_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_WINDOW_CLONE_CONTAINER))
#define GALA_WINDOW_CLONE_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_WINDOW_CLONE_CONTAINER, GalaWindowCloneContainerClass))

typedef struct _GalaWindowCloneContainer GalaWindowCloneContainer;
typedef struct _GalaWindowCloneContainerClass GalaWindowCloneContainerClass;

#define GALA_TYPE_BACKGROUND_MANAGER (gala_background_manager_get_type ())
#define GALA_BACKGROUND_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_BACKGROUND_MANAGER, GalaBackgroundManager))
#define GALA_BACKGROUND_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_BACKGROUND_MANAGER, GalaBackgroundManagerClass))
#define GALA_IS_BACKGROUND_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_BACKGROUND_MANAGER))
#define GALA_IS_BACKGROUND_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_BACKGROUND_MANAGER))
#define GALA_BACKGROUND_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_BACKGROUND_MANAGER, GalaBackgroundManagerClass))

typedef struct _GalaBackgroundManager GalaBackgroundManager;
typedef struct _GalaBackgroundManagerClass GalaBackgroundManagerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GALA_TYPE_DRAG_DROP_ACTION (gala_drag_drop_action_get_type ())
#define GALA_DRAG_DROP_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropAction))
#define GALA_DRAG_DROP_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropActionClass))
#define GALA_IS_DRAG_DROP_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_DRAG_DROP_ACTION))
#define GALA_IS_DRAG_DROP_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_DRAG_DROP_ACTION))
#define GALA_DRAG_DROP_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropActionClass))

typedef struct _GalaDragDropAction GalaDragDropAction;
typedef struct _GalaDragDropActionClass GalaDragDropActionClass;

#define GALA_TYPE_DRAG_DROP_ACTION_TYPE (gala_drag_drop_action_type_get_type ())

struct _GalaMonitorClone {
	ClutterActor parent_instance;
	GalaMonitorClonePrivate * priv;
};

struct _GalaMonitorCloneClass {
	ClutterActorClass parent_class;
};

struct _GalaMonitorClonePrivate {
	MetaScreen* _screen;
	gint _monitor;
	GalaWindowCloneContainer* window_container;
	GalaBackgroundManager* background;
};

typedef enum  {
	GALA_DRAG_DROP_ACTION_TYPE_SOURCE = 0,
	GALA_DRAG_DROP_ACTION_TYPE_DESTINATION
} GalaDragDropActionType;


static gpointer gala_monitor_clone_parent_class = NULL;

GType gala_monitor_clone_get_type (void) G_GNUC_CONST;
GType gala_window_clone_container_get_type (void) G_GNUC_CONST;
GType gala_background_manager_get_type (void) G_GNUC_CONST;
#define GALA_MONITOR_CLONE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GALA_TYPE_MONITOR_CLONE, GalaMonitorClonePrivate))
enum  {
	GALA_MONITOR_CLONE_DUMMY_PROPERTY,
	GALA_MONITOR_CLONE_SCREEN,
	GALA_MONITOR_CLONE_MONITOR
};
MetaScreen* gala_monitor_clone_get_screen (GalaMonitorClone* self);
static void gala_monitor_clone_window_entered (GalaMonitorClone* self, gint window_monitor, MetaWindow* window);
static void _gala_monitor_clone_window_entered_meta_screen_window_entered_monitor (MetaScreen* _sender, gint object, MetaWindow* p0, gpointer self);
static void gala_monitor_clone_window_left (GalaMonitorClone* self, gint window_monitor, MetaWindow* window);
static void _gala_monitor_clone_window_left_meta_screen_window_left_monitor (MetaScreen* _sender, gint object, MetaWindow* p0, gpointer self);
void gala_window_clone_container_restack_windows (GalaWindowCloneContainer* self, MetaScreen* screen);
static void _gala_window_clone_container_restack_windows_meta_screen_restacked (MetaScreen* _sender, gpointer self);
GalaMonitorClone* gala_monitor_clone_new (MetaScreen* screen, gint monitor);
GalaMonitorClone* gala_monitor_clone_construct (GType object_type, MetaScreen* screen, gint monitor);
void gala_monitor_clone_update_allocation (GalaMonitorClone* self);
gint gala_monitor_clone_get_monitor (GalaMonitorClone* self);
void gala_monitor_clone_open (GalaMonitorClone* self);
void gala_window_clone_container_open (GalaWindowCloneContainer* self, MetaWindow* selected_window);
void gala_monitor_clone_close (GalaMonitorClone* self);
void gala_window_clone_container_close (GalaWindowCloneContainer* self);
void gala_window_clone_container_remove_window (GalaWindowCloneContainer* self, MetaWindow* window);
void gala_window_clone_container_add_window (GalaWindowCloneContainer* self, MetaWindow* window);
static void gala_monitor_clone_set_screen (GalaMonitorClone* self, MetaScreen* value);
static void gala_monitor_clone_set_monitor (GalaMonitorClone* self, gint value);
static GObject * gala_monitor_clone_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
GalaBackgroundManager* gala_background_manager_new (MetaScreen* screen, gint monitor_index, gboolean control_position);
GalaBackgroundManager* gala_background_manager_construct (GType object_type, MetaScreen* screen, gint monitor_index, gboolean control_position);
#define GALA_MULTITASKING_VIEW_ANIMATION_DURATION 250
GalaWindowCloneContainer* gala_window_clone_container_new (gboolean overview_mode);
GalaWindowCloneContainer* gala_window_clone_container_construct (GType object_type, gboolean overview_mode);
static void _gala_monitor_clone___lambda67_ (GalaMonitorClone* self, MetaWindow* w);
static void __gala_monitor_clone___lambda67__gala_window_clone_container_window_selected (GalaWindowCloneContainer* _sender, MetaWindow* window, gpointer self);
GType gala_drag_drop_action_get_type (void) G_GNUC_CONST;
GType gala_drag_drop_action_type_get_type (void) G_GNUC_CONST;
GalaDragDropAction* gala_drag_drop_action_new (GalaDragDropActionType type, const gchar* id);
GalaDragDropAction* gala_drag_drop_action_construct (GType object_type, GalaDragDropActionType type, const gchar* id);
static void gala_monitor_clone_finalize (GObject* obj);
static void _vala_gala_monitor_clone_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gala_monitor_clone_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static void _gala_monitor_clone_window_entered_meta_screen_window_entered_monitor (MetaScreen* _sender, gint object, MetaWindow* p0, gpointer self) {
#line 80 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_monitor_clone_window_entered ((GalaMonitorClone*) self, object, p0);
#line 153 "MonitorClone.c"
}


static void _gala_monitor_clone_window_left_meta_screen_window_left_monitor (MetaScreen* _sender, gint object, MetaWindow* p0, gpointer self) {
#line 81 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_monitor_clone_window_left ((GalaMonitorClone*) self, object, p0);
#line 160 "MonitorClone.c"
}


static void _gala_window_clone_container_restack_windows_meta_screen_restacked (MetaScreen* _sender, gpointer self) {
#line 82 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_window_clone_container_restack_windows ((GalaWindowCloneContainer*) self, _sender);
#line 167 "MonitorClone.c"
}


GalaMonitorClone* gala_monitor_clone_construct (GType object_type, MetaScreen* screen, gint monitor) {
	GalaMonitorClone * self = NULL;
	MetaScreen* _tmp0_ = NULL;
	gint _tmp1_ = 0;
#line 40 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_val_if_fail (screen != NULL, NULL);
#line 42 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = screen;
#line 42 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = monitor;
#line 42 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self = (GalaMonitorClone*) g_object_new (object_type, "screen", _tmp0_, "monitor", _tmp1_, NULL);
#line 40 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return self;
#line 185 "MonitorClone.c"
}


GalaMonitorClone* gala_monitor_clone_new (MetaScreen* screen, gint monitor) {
#line 40 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return gala_monitor_clone_construct (GALA_TYPE_MONITOR_CLONE, screen, monitor);
#line 192 "MonitorClone.c"
}


/**
 * Make sure the MonitorClone is at the location of the monitor on the stage
 */
void gala_monitor_clone_update_allocation (GalaMonitorClone* self) {
	MetaRectangle monitor_geometry = {0};
	MetaScreen* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	MetaRectangle _tmp2_ = {0};
	MetaRectangle _tmp3_ = {0};
	gint _tmp4_ = 0;
	MetaRectangle _tmp5_ = {0};
	gint _tmp6_ = 0;
	MetaRectangle _tmp7_ = {0};
	gint _tmp8_ = 0;
	MetaRectangle _tmp9_ = {0};
	gint _tmp10_ = 0;
	GalaWindowCloneContainer* _tmp11_ = NULL;
	MetaRectangle _tmp12_ = {0};
	gint _tmp13_ = 0;
	MetaRectangle _tmp14_ = {0};
	gint _tmp15_ = 0;
#line 88 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 90 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->_screen;
#line 90 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = self->priv->_monitor;
#line 90 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	meta_screen_get_monitor_geometry (_tmp0_, _tmp1_, &_tmp2_);
#line 90 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	monitor_geometry = _tmp2_;
#line 92 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp3_ = monitor_geometry;
#line 92 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp4_ = _tmp3_.x;
#line 92 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp5_ = monitor_geometry;
#line 92 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp6_ = _tmp5_.y;
#line 92 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_position ((ClutterActor*) self, (gfloat) _tmp4_, (gfloat) _tmp6_);
#line 93 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp7_ = monitor_geometry;
#line 93 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp8_ = _tmp7_.width;
#line 93 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp9_ = monitor_geometry;
#line 93 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp10_ = _tmp9_.height;
#line 93 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_size ((ClutterActor*) self, (gfloat) _tmp8_, (gfloat) _tmp10_);
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp11_ = self->priv->window_container;
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp12_ = monitor_geometry;
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp13_ = _tmp12_.width;
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp14_ = monitor_geometry;
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp15_ = _tmp14_.height;
#line 94 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_size ((ClutterActor*) _tmp11_, (gfloat) _tmp13_, (gfloat) _tmp15_);
#line 259 "MonitorClone.c"
}


/**
 * Animate the windows from their old location to a tiled layout
 */
void gala_monitor_clone_open (GalaMonitorClone* self) {
	GalaWindowCloneContainer* _tmp0_ = NULL;
#line 100 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 102 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->window_container;
#line 102 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_window_clone_container_open (_tmp0_, NULL);
#line 274 "MonitorClone.c"
}


/**
 * Animate the windows back to their old location
 */
void gala_monitor_clone_close (GalaMonitorClone* self) {
	GalaWindowCloneContainer* _tmp0_ = NULL;
	GalaBackgroundManager* _tmp1_ = NULL;
#line 109 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 111 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->window_container;
#line 111 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_window_clone_container_close (_tmp0_);
#line 112 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = self->priv->background;
#line 112 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_opacity ((ClutterActor*) _tmp1_, (guint) 255);
#line 294 "MonitorClone.c"
}


static void gala_monitor_clone_window_left (GalaMonitorClone* self, gint window_monitor, MetaWindow* window) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	GalaWindowCloneContainer* _tmp2_ = NULL;
	MetaWindow* _tmp3_ = NULL;
#line 115 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 115 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (window != NULL);
#line 117 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = window_monitor;
#line 117 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = self->priv->_monitor;
#line 117 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	if (_tmp0_ != _tmp1_) {
#line 118 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		return;
#line 315 "MonitorClone.c"
	}
#line 120 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp2_ = self->priv->window_container;
#line 120 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp3_ = window;
#line 120 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_window_clone_container_remove_window (_tmp2_, _tmp3_);
#line 323 "MonitorClone.c"
}


static void gala_monitor_clone_window_entered (GalaMonitorClone* self, gint window_monitor, MetaWindow* window) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	GalaWindowCloneContainer* _tmp6_ = NULL;
	MetaWindow* _tmp7_ = NULL;
#line 123 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 123 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (window != NULL);
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = window_monitor;
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp2_ = self->priv->_monitor;
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	if (_tmp1_ != _tmp2_) {
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		_tmp0_ = TRUE;
#line 345 "MonitorClone.c"
	} else {
		MetaWindow* _tmp3_ = NULL;
		MetaWindowType _tmp4_ = 0;
		MetaWindowType _tmp5_ = 0;
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		_tmp3_ = window;
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		_tmp4_ = meta_window_get_window_type (_tmp3_);
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		_tmp5_ = _tmp4_;
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		_tmp0_ = _tmp5_ != META_WINDOW_NORMAL;
#line 358 "MonitorClone.c"
	}
#line 125 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	if (_tmp0_) {
#line 126 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		return;
#line 364 "MonitorClone.c"
	}
#line 128 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp6_ = self->priv->window_container;
#line 128 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp7_ = window;
#line 128 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_window_clone_container_add_window (_tmp6_, _tmp7_);
#line 372 "MonitorClone.c"
}


MetaScreen* gala_monitor_clone_get_screen (GalaMonitorClone* self) {
	MetaScreen* result;
	MetaScreen* _tmp0_ = NULL;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->_screen;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	result = _tmp0_;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return result;
#line 387 "MonitorClone.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return self ? g_object_ref (self) : NULL;
#line 394 "MonitorClone.c"
}


static void gala_monitor_clone_set_screen (GalaMonitorClone* self, MetaScreen* value) {
	MetaScreen* _tmp0_ = NULL;
	MetaScreen* _tmp1_ = NULL;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = value;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->_screen);
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self->priv->_screen = _tmp1_;
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_notify ((GObject *) self, "screen");
#line 413 "MonitorClone.c"
}


gint gala_monitor_clone_get_monitor (GalaMonitorClone* self) {
	gint result;
	gint _tmp0_ = 0;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->_monitor;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	result = _tmp0_;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return result;
#line 428 "MonitorClone.c"
}


static void gala_monitor_clone_set_monitor (GalaMonitorClone* self, gint value) {
	gint _tmp0_ = 0;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (self != NULL);
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = value;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self->priv->_monitor = _tmp0_;
#line 35 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_notify ((GObject *) self, "monitor");
#line 442 "MonitorClone.c"
}


static void _gala_monitor_clone___lambda67_ (GalaMonitorClone* self, MetaWindow* w) {
	MetaWindow* _tmp0_ = NULL;
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_return_if_fail (w != NULL);
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = w;
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_emit_by_name (self, "window-selected", _tmp0_);
#line 454 "MonitorClone.c"
}


static void __gala_monitor_clone___lambda67__gala_window_clone_container_window_selected (GalaWindowCloneContainer* _sender, MetaWindow* window, gpointer self) {
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_gala_monitor_clone___lambda67_ ((GalaMonitorClone*) self, window);
#line 461 "MonitorClone.c"
}


static GObject * gala_monitor_clone_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	GalaMonitorClone * self;
	MetaScreen* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GalaBackgroundManager* _tmp2_ = NULL;
	GalaBackgroundManager* _tmp3_ = NULL;
	GalaWindowCloneContainer* _tmp4_ = NULL;
	GalaWindowCloneContainer* _tmp5_ = NULL;
	MetaScreen* _tmp6_ = NULL;
	GalaWindowCloneContainer* _tmp7_ = NULL;
	MetaScreen* _tmp8_ = NULL;
	MetaScreen* _tmp9_ = NULL;
	MetaScreen* _tmp10_ = NULL;
	GList* _tmp11_ = NULL;
	GalaBackgroundManager* _tmp21_ = NULL;
	GalaWindowCloneContainer* _tmp22_ = NULL;
	GalaDragDropAction* drop = NULL;
	GalaDragDropAction* _tmp23_ = NULL;
	GalaDragDropAction* _tmp24_ = NULL;
#line 45 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	parent_class = G_OBJECT_CLASS (gala_monitor_clone_parent_class);
#line 45 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 45 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_MONITOR_CLONE, GalaMonitorClone);
#line 47 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_reactive ((ClutterActor*) self, TRUE);
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->_screen;
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp1_ = self->priv->_monitor;
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp2_ = gala_background_manager_new (_tmp0_, _tmp1_, FALSE);
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_ref_sink (_tmp2_);
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->background);
#line 49 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self->priv->background = _tmp2_;
#line 50 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp3_ = self->priv->background;
#line 50 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_set_easing_duration ((ClutterActor*) _tmp3_, (guint) GALA_MULTITASKING_VIEW_ANIMATION_DURATION);
#line 52 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp4_ = gala_window_clone_container_new (FALSE);
#line 52 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_ref_sink (_tmp4_);
#line 52 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->window_container);
#line 52 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self->priv->window_container = _tmp4_;
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp5_ = self->priv->window_container;
#line 53 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_connect_object (_tmp5_, "window-selected", (GCallback) __gala_monitor_clone___lambda67__gala_window_clone_container_window_selected, self, 0);
#line 54 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp6_ = self->priv->_screen;
#line 54 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp7_ = self->priv->window_container;
#line 54 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_connect_object (_tmp6_, "restacked", (GCallback) _gala_window_clone_container_restack_windows_meta_screen_restacked, _tmp7_, 0);
#line 56 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp8_ = self->priv->_screen;
#line 56 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_connect_object (_tmp8_, "window-entered-monitor", (GCallback) _gala_monitor_clone_window_entered_meta_screen_window_entered_monitor, self, 0);
#line 57 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp9_ = self->priv->_screen;
#line 57 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_connect_object (_tmp9_, "window-left-monitor", (GCallback) _gala_monitor_clone_window_left_meta_screen_window_left_monitor, self, 0);
#line 59 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp10_ = self->priv->_screen;
#line 59 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp11_ = meta_get_window_actors (_tmp10_);
#line 540 "MonitorClone.c"
	{
		GList* window_actor_collection = NULL;
		GList* window_actor_it = NULL;
#line 59 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		window_actor_collection = _tmp11_;
#line 59 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		for (window_actor_it = window_actor_collection; window_actor_it != NULL; window_actor_it = window_actor_it->next) {
#line 548 "MonitorClone.c"
			MetaWindowActor* window_actor = NULL;
#line 59 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
			window_actor = (MetaWindowActor*) window_actor_it->data;
#line 552 "MonitorClone.c"
			{
				MetaWindowActor* _tmp12_ = NULL;
				gboolean _tmp13_ = FALSE;
				MetaWindow* window = NULL;
				MetaWindowActor* _tmp14_ = NULL;
				MetaWindow* _tmp15_ = NULL;
				MetaWindow* _tmp16_ = NULL;
				gint _tmp17_ = 0;
				gint _tmp18_ = 0;
#line 60 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp12_ = window_actor;
#line 60 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp13_ = meta_window_actor_is_destroyed (_tmp12_);
#line 60 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				if (_tmp13_) {
#line 61 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
					continue;
#line 570 "MonitorClone.c"
				}
#line 63 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp14_ = window_actor;
#line 63 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp15_ = meta_window_actor_get_meta_window (_tmp14_);
#line 63 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				window = _tmp15_;
#line 64 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp16_ = window;
#line 64 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp17_ = meta_window_get_monitor (_tmp16_);
#line 64 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				_tmp18_ = self->priv->_monitor;
#line 64 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
				if (_tmp17_ == _tmp18_) {
#line 586 "MonitorClone.c"
					gint _tmp19_ = 0;
					MetaWindow* _tmp20_ = NULL;
#line 65 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
					_tmp19_ = self->priv->_monitor;
#line 65 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
					_tmp20_ = window;
#line 65 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
					gala_monitor_clone_window_entered (self, _tmp19_, _tmp20_);
#line 595 "MonitorClone.c"
				}
			}
		}
	}
#line 69 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp21_ = self->priv->background;
#line 69 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_add_child ((ClutterActor*) self, (ClutterActor*) _tmp21_);
#line 70 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp22_ = self->priv->window_container;
#line 70 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_add_child ((ClutterActor*) self, (ClutterActor*) _tmp22_);
#line 72 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp23_ = gala_drag_drop_action_new (GALA_DRAG_DROP_ACTION_TYPE_DESTINATION, "multitaskingview-window");
#line 72 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_ref_sink (_tmp23_);
#line 72 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	drop = _tmp23_;
#line 73 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp24_ = drop;
#line 73 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	clutter_actor_add_action ((ClutterActor*) self, (ClutterAction*) _tmp24_);
#line 75 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_monitor_clone_update_allocation (self);
#line 45 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (drop);
#line 45 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	return obj;
#line 624 "MonitorClone.c"
}


static void gala_monitor_clone_class_init (GalaMonitorCloneClass * klass) {
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	gala_monitor_clone_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_type_class_add_private (klass, sizeof (GalaMonitorClonePrivate));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_monitor_clone_get_property;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_monitor_clone_set_property;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_monitor_clone_constructor;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_monitor_clone_finalize;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_MONITOR_CLONE_SCREEN, g_param_spec_object ("screen", "screen", "screen", meta_screen_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_MONITOR_CLONE_MONITOR, g_param_spec_int ("monitor", "monitor", "monitor", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_new ("window_selected", GALA_TYPE_MONITOR_CLONE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, meta_window_get_type ());
#line 647 "MonitorClone.c"
}


static void gala_monitor_clone_instance_init (GalaMonitorClone * self) {
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self->priv = GALA_MONITOR_CLONE_GET_PRIVATE (self);
#line 654 "MonitorClone.c"
}


static void gala_monitor_clone_finalize (GObject* obj) {
	GalaMonitorClone * self;
	MetaScreen* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	MetaScreen* _tmp2_ = NULL;
	guint _tmp3_ = 0U;
	MetaScreen* _tmp4_ = NULL;
	GalaWindowCloneContainer* _tmp5_ = NULL;
	guint _tmp6_ = 0U;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_MONITOR_CLONE, GalaMonitorClone);
#line 80 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp0_ = self->priv->_screen;
#line 80 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_parse_name ("window-entered-monitor", meta_screen_get_type (), &_tmp1_, NULL, FALSE);
#line 80 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_handlers_disconnect_matched (_tmp0_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp1_, 0, NULL, (GCallback) _gala_monitor_clone_window_entered_meta_screen_window_entered_monitor, self);
#line 81 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp2_ = self->priv->_screen;
#line 81 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_parse_name ("window-left-monitor", meta_screen_get_type (), &_tmp3_, NULL, FALSE);
#line 81 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_handlers_disconnect_matched (_tmp2_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp3_, 0, NULL, (GCallback) _gala_monitor_clone_window_left_meta_screen_window_left_monitor, self);
#line 82 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp4_ = self->priv->_screen;
#line 82 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_tmp5_ = self->priv->window_container;
#line 82 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_parse_name ("restacked", meta_screen_get_type (), &_tmp6_, NULL, FALSE);
#line 82 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	g_signal_handlers_disconnect_matched (_tmp4_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp6_, 0, NULL, (GCallback) _gala_window_clone_container_restack_windows_meta_screen_restacked, _tmp5_);
#line 34 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->_screen);
#line 37 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->window_container);
#line 38 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	_g_object_unref0 (self->priv->background);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	G_OBJECT_CLASS (gala_monitor_clone_parent_class)->finalize (obj);
#line 697 "MonitorClone.c"
}


/**
 * More or less utility class to contain a WindowCloneContainer for each
 * non-primary monitor. It's the pendant to the WorkspaceClone which is
 * only placed on the primary monitor. It also draws a wallpaper behind itself
 * as the WindowGroup is hidden while the view is active. Only used when
 * workspaces-only-on-primary is set to true.
 */
GType gala_monitor_clone_get_type (void) {
	static volatile gsize gala_monitor_clone_type_id__volatile = 0;
	if (g_once_init_enter (&gala_monitor_clone_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GalaMonitorCloneClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_monitor_clone_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaMonitorClone), 0, (GInstanceInitFunc) gala_monitor_clone_instance_init, NULL };
		GType gala_monitor_clone_type_id;
		gala_monitor_clone_type_id = g_type_register_static (clutter_actor_get_type (), "GalaMonitorClone", &g_define_type_info, 0);
		g_once_init_leave (&gala_monitor_clone_type_id__volatile, gala_monitor_clone_type_id);
	}
	return gala_monitor_clone_type_id__volatile;
}


static void _vala_gala_monitor_clone_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GalaMonitorClone * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_MONITOR_CLONE, GalaMonitorClone);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	switch (property_id) {
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		case GALA_MONITOR_CLONE_SCREEN:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		g_value_set_object (value, gala_monitor_clone_get_screen (self));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		case GALA_MONITOR_CLONE_MONITOR:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		g_value_set_int (value, gala_monitor_clone_get_monitor (self));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 737 "MonitorClone.c"
		default:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 743 "MonitorClone.c"
	}
}


static void _vala_gala_monitor_clone_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GalaMonitorClone * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_MONITOR_CLONE, GalaMonitorClone);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
	switch (property_id) {
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		case GALA_MONITOR_CLONE_SCREEN:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		gala_monitor_clone_set_screen (self, g_value_get_object (value));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		case GALA_MONITOR_CLONE_MONITOR:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		gala_monitor_clone_set_monitor (self, g_value_get_int (value));
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 765 "MonitorClone.c"
		default:
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 30 "/home/nick/work/gala/src/Widgets/MonitorClone.vala"
		break;
#line 771 "MonitorClone.c"
	}
}



