/* shell.c generated by valac, the Vala compiler
 * generated from shell.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define MATENU_TYPE_SHELL (matenu_shell_get_type ())
#define MATENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_SHELL, MatenuShell))
#define MATENU_IS_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_SHELL))
#define MATENU_SHELL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_SHELL, MatenuShellIface))

typedef struct _MatenuShell MatenuShell;
typedef struct _MatenuShellIface MatenuShellIface;

#define MATENU_TYPE_ITEM (matenu_item_get_type ())
#define MATENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_ITEM, MatenuItem))
#define MATENU_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_ITEM))
#define MATENU_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_ITEM, MatenuItemIface))

typedef struct _MatenuItem MatenuItem;
typedef struct _MatenuItemIface MatenuItemIface;

#define MATENU_TYPE_ITEM_TYPE (matenu_item_type_get_type ())

#define MATENU_TYPE_ITEM_STATE (matenu_item_state_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	MATENU_ITEM_TYPE_NORMAL = 0,
	MATENU_ITEM_TYPE_CHECK = 1,
	MATENU_ITEM_TYPE_RADIO = 2,
	MATENU_ITEM_TYPE_IMAGE = 3,
	MATENU_ITEM_TYPE_SEPARATOR = 4,
	MATENU_ITEM_TYPE_ARROW = 5,
	MATENU_ITEM_TYPE_ICON = 6
} MatenuItemType;

typedef enum  {
	MATENU_ITEM_STATE_UNTOGGLED = 0,
	MATENU_ITEM_STATE_TOGGLED = 1,
	MATENU_ITEM_STATE_TRISTATE = 2
} MatenuItemState;

struct _MatenuItemIface {
	GTypeInterface parent_iface;
	MatenuShell* (*get_shell) (MatenuItem* self);
	MatenuShell* (*get_sub_shell) (MatenuItem* self);
	gboolean (*get_has_sub_shell) (MatenuItem* self);
	void (*set_has_sub_shell) (MatenuItem* self, gboolean value);
	gboolean (*get_client_side_sub_shell) (MatenuItem* self);
	void (*set_client_side_sub_shell) (MatenuItem* self, gboolean value);
	const char* (*get_item_id) (MatenuItem* self);
	void (*set_item_id) (MatenuItem* self, const char* value);
	MatenuItemType (*get_item_type) (MatenuItem* self);
	void (*set_item_type) (MatenuItem* self, MatenuItemType value);
	gboolean (*get_item_use_underline) (MatenuItem* self);
	void (*set_item_use_underline) (MatenuItem* self, gboolean value);
	gboolean (*get_item_sensitive) (MatenuItem* self);
	void (*set_item_sensitive) (MatenuItem* self, gboolean value);
	gboolean (*get_item_visible) (MatenuItem* self);
	void (*set_item_visible) (MatenuItem* self, gboolean value);
	MatenuItemState (*get_item_state) (MatenuItem* self);
	void (*set_item_state) (MatenuItem* self, MatenuItemState value);
	const char* (*get_item_label) (MatenuItem* self);
	void (*set_item_label) (MatenuItem* self, const char* value);
	const char* (*get_item_icon) (MatenuItem* self);
	void (*set_item_icon) (MatenuItem* self, const char* value);
	const char* (*get_item_accel_text) (MatenuItem* self);
	void (*set_item_accel_text) (MatenuItem* self, const char* value);
	const char* (*get_item_font) (MatenuItem* self);
	void (*set_item_font) (MatenuItem* self, const char* value);
};

struct _MatenuShellIface {
	GTypeInterface parent_iface;
	MatenuItem* (*get_item) (MatenuShell* self, gint position);
	MatenuItem* (*get_item_by_id) (MatenuShell* self, const char* id);
	gint (*get_item_position) (MatenuShell* self, MatenuItem* item);
	MatenuItem* (*get_owner) (MatenuShell* self);
	gint (*get_length) (MatenuShell* self);
	void (*set_length) (MatenuShell* self, gint value);
};



GType matenu_item_type_get_type (void) G_GNUC_CONST;
GType matenu_item_state_get_type (void) G_GNUC_CONST;
GType matenu_item_get_type (void) G_GNUC_CONST;
GType matenu_shell_get_type (void) G_GNUC_CONST;
MatenuItem* matenu_shell_get_item (MatenuShell* self, gint position);
MatenuItem* matenu_shell_get_item_by_id (MatenuShell* self, const char* id);
gint matenu_shell_get_item_position (MatenuShell* self, MatenuItem* item);
MatenuShell* matenu_item_get_sub_shell (MatenuItem* self);
MatenuItem* matenu_shell_get_item_by_path (MatenuShell* self, const char* path);
MatenuItem* matenu_shell_get_owner (MatenuShell* self);
gint matenu_shell_get_length (MatenuShell* self);
void matenu_shell_set_length (MatenuShell* self, gint value);
MatenuShell* matenu_item_get_topmost_shell (MatenuItem* self);
MatenuShell* matenu_shell_get_topmost_shell (MatenuShell* self);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);



MatenuItem* matenu_shell_get_item (MatenuShell* self, gint position) {
	return MATENU_SHELL_GET_INTERFACE (self)->get_item (self, position);
}


MatenuItem* matenu_shell_get_item_by_id (MatenuShell* self, const char* id) {
	return MATENU_SHELL_GET_INTERFACE (self)->get_item_by_id (self, id);
}


gint matenu_shell_get_item_position (MatenuShell* self, MatenuItem* item) {
	return MATENU_SHELL_GET_INTERFACE (self)->get_item_position (self, item);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


MatenuItem* matenu_shell_get_item_by_path (MatenuShell* self, const char* path) {
	MatenuItem* result = NULL;
	char** _tmp1_;
	gint _tokens_size_;
	gint tokens_length1;
	char** _tmp0_;
	char** tokens;
	MatenuShell* shell;
	g_return_val_if_fail (path != NULL, NULL);
	tokens = (_tmp1_ = _tmp0_ = g_strsplit_set (path, "/", -1), tokens_length1 = _vala_array_length (_tmp0_), _tokens_size_ = tokens_length1, _tmp1_);
	tokens_length1 = (gint) g_strv_length (tokens);
	shell = _g_object_ref0 (self);
	{
		gint i;
		i = 1;
		{
			gboolean _tmp2_;
			_tmp2_ = TRUE;
			while (TRUE) {
				const char* token;
				MatenuItem* item;
				MatenuItem* _tmp3_;
				MatenuShell* _tmp5_;
				if (!_tmp2_) {
					i++;
				}
				_tmp2_ = FALSE;
				if (!(i < tokens_length1)) {
					break;
				}
				token = tokens[i];
				item = NULL;
				item = (_tmp3_ = matenu_shell_get_item_by_id (shell, token), _g_object_unref0 (item), _tmp3_);
				if (item == NULL) {
					const char* endptr;
					gint pos;
					endptr = NULL;
					pos = (gint) g_ascii_strtoll (token, &endptr, 0);
					if (g_utf8_get_char (endptr) == 0) {
						MatenuItem* _tmp4_;
						item = (_tmp4_ = matenu_shell_get_item (shell, pos), _g_object_unref0 (item), _tmp4_);
					}
				}
				if (i == (tokens_length1 - 1)) {
					result = item;
					_g_object_unref0 (shell);
					tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
					return result;
				}
				if (item == NULL) {
					result = NULL;
					_g_object_unref0 (item);
					_g_object_unref0 (shell);
					tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
					return result;
				}
				shell = (_tmp5_ = _g_object_ref0 (matenu_item_get_sub_shell (item)), _g_object_unref0 (shell), _tmp5_);
				if (shell == NULL) {
					result = NULL;
					_g_object_unref0 (item);
					_g_object_unref0 (shell);
					tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
					return result;
				}
				_g_object_unref0 (item);
			}
		}
	}
	result = NULL;
	_g_object_unref0 (shell);
	tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


MatenuItem* matenu_shell_get_owner (MatenuShell* self) {
	return MATENU_SHELL_GET_INTERFACE (self)->get_owner (self);
}


gint matenu_shell_get_length (MatenuShell* self) {
	return MATENU_SHELL_GET_INTERFACE (self)->get_length (self);
}


void matenu_shell_set_length (MatenuShell* self, gint value) {
	MATENU_SHELL_GET_INTERFACE (self)->set_length (self, value);
}


MatenuShell* matenu_shell_get_topmost_shell (MatenuShell* self) {
	MatenuShell* result;
	g_return_val_if_fail (self != NULL, NULL);
	if (matenu_shell_get_owner (self) != NULL) {
		result = matenu_item_get_topmost_shell (matenu_shell_get_owner (self));
		return result;
	}
	result = self;
	return result;
}


static void matenu_shell_base_init (MatenuShellIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_object_interface_install_property (iface, g_param_spec_object ("owner", "owner", "owner", MATENU_TYPE_ITEM, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_int ("length", "length", "length", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_signal_new ("activate", MATENU_TYPE_SHELL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, MATENU_TYPE_ITEM);
		g_signal_new ("select", MATENU_TYPE_SHELL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, MATENU_TYPE_ITEM);
		g_signal_new ("deselect", MATENU_TYPE_SHELL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, MATENU_TYPE_ITEM);
	}
}


GType matenu_shell_get_type (void) {
	static volatile gsize matenu_shell_type_id__volatile = 0;
	if (g_once_init_enter (&matenu_shell_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MatenuShellIface), (GBaseInitFunc) matenu_shell_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType matenu_shell_type_id;
		matenu_shell_type_id = g_type_register_static (G_TYPE_INTERFACE, "MatenuShell", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (matenu_shell_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&matenu_shell_type_id__volatile, matenu_shell_type_id);
	}
	return matenu_shell_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}




