/* IconGroupContainer.c generated by valac 0.30.1, the Vala compiler
 * generated from IconGroupContainer.vala, do not modify */

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
#include <meta/workspace.h>
#include <float.h>
#include <math.h>


#define GALA_TYPE_ICON_GROUP_CONTAINER (gala_icon_group_container_get_type ())
#define GALA_ICON_GROUP_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainer))
#define GALA_ICON_GROUP_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainerClass))
#define GALA_IS_ICON_GROUP_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_ICON_GROUP_CONTAINER))
#define GALA_IS_ICON_GROUP_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_ICON_GROUP_CONTAINER))
#define GALA_ICON_GROUP_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainerClass))

typedef struct _GalaIconGroupContainer GalaIconGroupContainer;
typedef struct _GalaIconGroupContainerClass GalaIconGroupContainerClass;
typedef struct _GalaIconGroupContainerPrivate GalaIconGroupContainerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GALA_TYPE_ICON_GROUP (gala_icon_group_get_type ())
#define GALA_ICON_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_ICON_GROUP, GalaIconGroup))
#define GALA_ICON_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_ICON_GROUP, GalaIconGroupClass))
#define GALA_IS_ICON_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_ICON_GROUP))
#define GALA_IS_ICON_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_ICON_GROUP))
#define GALA_ICON_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_ICON_GROUP, GalaIconGroupClass))

typedef struct _GalaIconGroup GalaIconGroup;
typedef struct _GalaIconGroupClass GalaIconGroupClass;

#define GALA_TYPE_WORKSPACE_INSERT_THUMB (gala_workspace_insert_thumb_get_type ())
#define GALA_WORKSPACE_INSERT_THUMB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb))
#define GALA_WORKSPACE_INSERT_THUMB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumbClass))
#define GALA_IS_WORKSPACE_INSERT_THUMB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB))
#define GALA_IS_WORKSPACE_INSERT_THUMB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_WORKSPACE_INSERT_THUMB))
#define GALA_WORKSPACE_INSERT_THUMB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumbClass))

typedef struct _GalaWorkspaceInsertThumb GalaWorkspaceInsertThumb;
typedef struct _GalaWorkspaceInsertThumbClass GalaWorkspaceInsertThumbClass;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

struct _GalaIconGroupContainer {
	ClutterActor parent_instance;
	GalaIconGroupContainerPrivate * priv;
};

struct _GalaIconGroupContainerClass {
	ClutterActorClass parent_class;
};

struct _GalaIconGroupContainerPrivate {
	MetaScreen* _screen;
};


static gpointer gala_icon_group_container_parent_class = NULL;

GType gala_icon_group_container_get_type (void) G_GNUC_CONST;
#define GALA_ICON_GROUP_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainerPrivate))
enum  {
	GALA_ICON_GROUP_CONTAINER_DUMMY_PROPERTY,
	GALA_ICON_GROUP_CONTAINER_SCREEN
};
#define GALA_ICON_GROUP_CONTAINER_SPACING 48
#define GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH 64
GalaIconGroupContainer* gala_icon_group_container_new (MetaScreen* screen);
GalaIconGroupContainer* gala_icon_group_container_construct (GType object_type, MetaScreen* screen);
GType gala_icon_group_get_type (void) G_GNUC_CONST;
void gala_icon_group_container_add_group (GalaIconGroupContainer* self, GalaIconGroup* group);
MetaWorkspace* gala_icon_group_get_workspace (GalaIconGroup* self);
GType gala_workspace_insert_thumb_get_type (void) G_GNUC_CONST;
GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_new (gint workspace_index);
GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_construct (GType object_type, gint workspace_index);
static void gala_icon_group_container_expanded_changed (GalaIconGroupContainer* self, GParamSpec* param);
static void _gala_icon_group_container_expanded_changed_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void gala_icon_group_container_update_inserter_indices (GalaIconGroupContainer* self);
void gala_icon_group_container_remove_group (GalaIconGroupContainer* self, GalaIconGroup* group);
gfloat gala_icon_group_container_calculate_total_width (GalaIconGroupContainer* self);
gboolean gala_workspace_insert_thumb_get_expanded (GalaWorkspaceInsertThumb* self);
void gala_workspace_insert_thumb_set_workspace_index (GalaWorkspaceInsertThumb* self, gint value);
MetaScreen* gala_icon_group_container_get_screen (GalaIconGroupContainer* self);
static void gala_icon_group_container_set_screen (GalaIconGroupContainer* self, MetaScreen* value);
static void gala_icon_group_container_finalize (GObject* obj);
static void _vala_gala_icon_group_container_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gala_icon_group_container_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GalaIconGroupContainer* gala_icon_group_container_construct (GType object_type, MetaScreen* screen) {
	GalaIconGroupContainer * self = NULL;
	MetaScreen* _tmp0_ = NULL;
	ClutterBoxLayout* _tmp1_ = NULL;
	ClutterBoxLayout* _tmp2_ = NULL;
#line 37 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_val_if_fail (screen != NULL, NULL);
#line 39 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = screen;
#line 39 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	self = (GalaIconGroupContainer*) g_object_new (object_type, "screen", _tmp0_, NULL);
#line 41 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp1_ = (ClutterBoxLayout*) clutter_box_layout_new ();
#line 41 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_object_ref_sink (_tmp1_);
#line 41 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp2_ = _tmp1_;
#line 41 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	clutter_actor_set_layout_manager ((ClutterActor*) self, (ClutterLayoutManager*) _tmp2_);
#line 41 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_g_object_unref0 (_tmp2_);
#line 37 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	return self;
#line 133 "IconGroupContainer.c"
}


GalaIconGroupContainer* gala_icon_group_container_new (MetaScreen* screen) {
#line 37 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	return gala_icon_group_container_construct (GALA_TYPE_ICON_GROUP_CONTAINER, screen);
#line 140 "IconGroupContainer.c"
}


static void _gala_icon_group_container_expanded_changed_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 51 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	gala_icon_group_container_expanded_changed ((GalaIconGroupContainer*) self, pspec);
#line 147 "IconGroupContainer.c"
}


void gala_icon_group_container_add_group (GalaIconGroupContainer* self, GalaIconGroup* group) {
	gint index = 0;
	GalaIconGroup* _tmp0_ = NULL;
	MetaWorkspace* _tmp1_ = NULL;
	MetaWorkspace* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	GalaIconGroup* _tmp4_ = NULL;
	GalaWorkspaceInsertThumb* thumb = NULL;
	GalaWorkspaceInsertThumb* _tmp5_ = NULL;
#line 44 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (self != NULL);
#line 44 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (group != NULL);
#line 46 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = group;
#line 46 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp1_ = gala_icon_group_get_workspace (_tmp0_);
#line 46 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp2_ = _tmp1_;
#line 46 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp3_ = meta_workspace_index (_tmp2_);
#line 46 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	index = _tmp3_;
#line 48 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp4_ = group;
#line 48 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	clutter_actor_insert_child_at_index ((ClutterActor*) self, (ClutterActor*) _tmp4_, index * 2);
#line 50 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp5_ = gala_workspace_insert_thumb_new (index);
#line 50 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_object_ref_sink (_tmp5_);
#line 50 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	thumb = _tmp5_;
#line 51 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_signal_connect_object ((GObject*) thumb, "notify::expanded", (GCallback) _gala_icon_group_container_expanded_changed_g_object_notify, self, G_CONNECT_AFTER);
#line 52 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	clutter_actor_insert_child_at_index ((ClutterActor*) self, (ClutterActor*) thumb, index * 2);
#line 54 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	gala_icon_group_container_update_inserter_indices (self);
#line 44 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_g_object_unref0 (thumb);
#line 192 "IconGroupContainer.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 59 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	return self ? g_object_ref (self) : NULL;
#line 199 "IconGroupContainer.c"
}


void gala_icon_group_container_remove_group (GalaIconGroupContainer* self, GalaIconGroup* group) {
	GalaWorkspaceInsertThumb* thumb = NULL;
	GalaIconGroup* _tmp0_ = NULL;
	ClutterActor* _tmp1_ = NULL;
	GalaWorkspaceInsertThumb* _tmp2_ = NULL;
	guint _tmp3_ = 0U;
	GQuark _tmp4_ = 0U;
	GalaIconGroup* _tmp5_ = NULL;
#line 57 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (self != NULL);
#line 57 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (group != NULL);
#line 59 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = group;
#line 59 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp1_ = clutter_actor_get_previous_sibling ((ClutterActor*) _tmp0_);
#line 59 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb));
#line 59 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	thumb = _tmp2_;
#line 60 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_signal_parse_name ("notify::expanded", G_TYPE_OBJECT, &_tmp3_, &_tmp4_, TRUE);
#line 60 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_signal_handlers_disconnect_matched ((GObject*) thumb, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_DETAIL | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp3_, _tmp4_, NULL, (GCallback) _gala_icon_group_container_expanded_changed_g_object_notify, self);
#line 61 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	clutter_actor_remove_child ((ClutterActor*) self, (ClutterActor*) thumb);
#line 63 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp5_ = group;
#line 63 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	clutter_actor_remove_child ((ClutterActor*) self, (ClutterActor*) _tmp5_);
#line 65 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	gala_icon_group_container_update_inserter_indices (self);
#line 57 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_g_object_unref0 (thumb);
#line 237 "IconGroupContainer.c"
}


static void gala_icon_group_container_expanded_changed (GalaIconGroupContainer* self, GParamSpec* param) {
#line 68 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (self != NULL);
#line 68 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (param != NULL);
#line 70 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_signal_emit_by_name (self, "request-reposition");
#line 248 "IconGroupContainer.c"
}


/**
 * Calculates the width that will be occupied taking currently running animations
 * end states into account
 */
gfloat gala_icon_group_container_calculate_total_width (GalaIconGroupContainer* self) {
	gfloat result = 0.0F;
	gfloat width = 0.0F;
	GList* _tmp0_ = NULL;
	gfloat _tmp8_ = 0.0F;
#line 77 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_val_if_fail (self != NULL, 0.0F);
#line 79 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	width = 0.0f;
#line 80 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = clutter_actor_get_children ((ClutterActor*) self);
#line 267 "IconGroupContainer.c"
	{
		GList* child_collection = NULL;
		GList* child_it = NULL;
#line 80 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		child_collection = _tmp0_;
#line 80 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
#line 275 "IconGroupContainer.c"
			ClutterActor* child = NULL;
#line 80 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
			child = (ClutterActor*) child_it->data;
#line 279 "IconGroupContainer.c"
			{
				ClutterActor* _tmp1_ = NULL;
#line 81 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				_tmp1_ = child;
#line 81 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, GALA_TYPE_WORKSPACE_INSERT_THUMB)) {
#line 286 "IconGroupContainer.c"
					ClutterActor* _tmp2_ = NULL;
					gboolean _tmp3_ = FALSE;
					gboolean _tmp4_ = FALSE;
#line 82 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp2_ = child;
#line 82 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp3_ = gala_workspace_insert_thumb_get_expanded (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb));
#line 82 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp4_ = _tmp3_;
#line 82 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					if (_tmp4_) {
#line 298 "IconGroupContainer.c"
						gfloat _tmp5_ = 0.0F;
#line 83 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
						_tmp5_ = width;
#line 83 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
						width = _tmp5_ + (GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH + (GALA_ICON_GROUP_CONTAINER_SPACING * 2));
#line 304 "IconGroupContainer.c"
					} else {
						gfloat _tmp6_ = 0.0F;
#line 85 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
						_tmp6_ = width;
#line 85 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
						width = _tmp6_ + GALA_ICON_GROUP_CONTAINER_SPACING;
#line 311 "IconGroupContainer.c"
					}
				} else {
					gfloat _tmp7_ = 0.0F;
#line 87 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp7_ = width;
#line 87 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					width = _tmp7_ + GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH;
#line 319 "IconGroupContainer.c"
				}
			}
		}
#line 80 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		_g_list_free0 (child_collection);
#line 325 "IconGroupContainer.c"
	}
#line 90 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp8_ = width;
#line 90 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	width = _tmp8_ + GALA_ICON_GROUP_CONTAINER_SPACING;
#line 92 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	result = width;
#line 92 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	return result;
#line 335 "IconGroupContainer.c"
}


static void gala_icon_group_container_update_inserter_indices (GalaIconGroupContainer* self) {
	gint current_index = 0;
	GList* _tmp0_ = NULL;
#line 95 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (self != NULL);
#line 97 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	current_index = 0;
#line 99 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = clutter_actor_get_children ((ClutterActor*) self);
#line 348 "IconGroupContainer.c"
	{
		GList* child_collection = NULL;
		GList* child_it = NULL;
#line 99 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		child_collection = _tmp0_;
#line 99 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
#line 356 "IconGroupContainer.c"
			ClutterActor* child = NULL;
#line 99 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
			child = (ClutterActor*) child_it->data;
#line 360 "IconGroupContainer.c"
			{
				GalaWorkspaceInsertThumb* thumb = NULL;
				ClutterActor* _tmp1_ = NULL;
				GalaWorkspaceInsertThumb* _tmp2_ = NULL;
#line 100 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				_tmp1_ = child;
#line 100 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				thumb = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, GALA_TYPE_WORKSPACE_INSERT_THUMB) ? ((GalaWorkspaceInsertThumb*) _tmp1_) : NULL;
#line 101 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				_tmp2_ = thumb;
#line 101 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
				if (_tmp2_ != NULL) {
#line 373 "IconGroupContainer.c"
					GalaWorkspaceInsertThumb* _tmp3_ = NULL;
					gint _tmp4_ = 0;
#line 102 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp3_ = thumb;
#line 102 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					_tmp4_ = current_index;
#line 102 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					current_index = _tmp4_ + 1;
#line 102 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
					gala_workspace_insert_thumb_set_workspace_index (_tmp3_, _tmp4_);
#line 384 "IconGroupContainer.c"
				}
			}
		}
#line 99 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		_g_list_free0 (child_collection);
#line 390 "IconGroupContainer.c"
	}
}


MetaScreen* gala_icon_group_container_get_screen (GalaIconGroupContainer* self) {
	MetaScreen* result;
	MetaScreen* _tmp0_ = NULL;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = self->priv->_screen;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	result = _tmp0_;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	return result;
#line 406 "IconGroupContainer.c"
}


static void gala_icon_group_container_set_screen (GalaIconGroupContainer* self, MetaScreen* value) {
	MetaScreen* _tmp0_ = NULL;
	MetaScreen* _tmp1_ = NULL;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_return_if_fail (self != NULL);
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp0_ = value;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_g_object_unref0 (self->priv->_screen);
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	self->priv->_screen = _tmp1_;
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_object_notify ((GObject *) self, "screen");
#line 425 "IconGroupContainer.c"
}


static void gala_icon_group_container_class_init (GalaIconGroupContainerClass * klass) {
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	gala_icon_group_container_parent_class = g_type_class_peek_parent (klass);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_type_class_add_private (klass, sizeof (GalaIconGroupContainerPrivate));
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_icon_group_container_get_property;
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_icon_group_container_set_property;
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_icon_group_container_finalize;
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_ICON_GROUP_CONTAINER_SCREEN, g_param_spec_object ("screen", "screen", "screen", meta_screen_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	g_signal_new ("request_reposition", GALA_TYPE_ICON_GROUP_CONTAINER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 444 "IconGroupContainer.c"
}


static void gala_icon_group_container_instance_init (GalaIconGroupContainer * self) {
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	self->priv = GALA_ICON_GROUP_CONTAINER_GET_PRIVATE (self);
#line 451 "IconGroupContainer.c"
}


static void gala_icon_group_container_finalize (GObject* obj) {
	GalaIconGroupContainer * self;
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainer);
#line 35 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	_g_object_unref0 (self->priv->_screen);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	G_OBJECT_CLASS (gala_icon_group_container_parent_class)->finalize (obj);
#line 463 "IconGroupContainer.c"
}


/**
 * This class contains the icon groups at the bottom and will take
 * care of displaying actors for inserting windows between the groups
 * once implemented
 */
GType gala_icon_group_container_get_type (void) {
	static volatile gsize gala_icon_group_container_type_id__volatile = 0;
	if (g_once_init_enter (&gala_icon_group_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GalaIconGroupContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_icon_group_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaIconGroupContainer), 0, (GInstanceInitFunc) gala_icon_group_container_instance_init, NULL };
		GType gala_icon_group_container_type_id;
		gala_icon_group_container_type_id = g_type_register_static (clutter_actor_get_type (), "GalaIconGroupContainer", &g_define_type_info, 0);
		g_once_init_leave (&gala_icon_group_container_type_id__volatile, gala_icon_group_container_type_id);
	}
	return gala_icon_group_container_type_id__volatile;
}


static void _vala_gala_icon_group_container_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GalaIconGroupContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainer);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	switch (property_id) {
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		case GALA_ICON_GROUP_CONTAINER_SCREEN:
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		g_value_set_object (value, gala_icon_group_container_get_screen (self));
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		break;
#line 495 "IconGroupContainer.c"
		default:
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		break;
#line 501 "IconGroupContainer.c"
	}
}


static void _vala_gala_icon_group_container_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GalaIconGroupContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_ICON_GROUP_CONTAINER, GalaIconGroupContainer);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
	switch (property_id) {
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		case GALA_ICON_GROUP_CONTAINER_SCREEN:
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		gala_icon_group_container_set_screen (self, g_value_get_object (value));
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		break;
#line 517 "IconGroupContainer.c"
		default:
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 28 "/home/nick/work/gala/src/Widgets/IconGroupContainer.vala"
		break;
#line 523 "IconGroupContainer.c"
	}
}



