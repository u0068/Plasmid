#pragma once
#include <string>

typedef unsigned char   undefined;

//typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
//typedef unsigned long long    GUID;
typedef void* ImageBaseOffset32;

typedef long long    longlong;
typedef long long     long64;
typedef unsigned long long     ulong64;
typedef unsigned long long    qword;
typedef signed char    schar;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long    unsigned_long;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef unsigned int    wchar32;
//typedef short    wchar_t;
typedef unsigned short    word;
typedef std::string     string;
typedef void*   pointer;

typedef union real_3x3_u_0 real_3x3_u_0, *Preal_3x3_u_0;

typedef struct real_3 real_3, *Preal_3;

typedef union real_3_u_0 real_3_u_0, *Preal_3_u_0;

typedef struct real_3_u_0_s_0 real_3_u_0_s_0, *Preal_3_u_0_s_0;

typedef struct real_2 real_2, *Preal_2;

typedef struct real_3_u_0_s_2 real_3_u_0_s_2, *Preal_3_u_0_s_2;

typedef union real_2_u_0 real_2_u_0, *Preal_2_u_0;

typedef struct real_2_u_0_s_0 real_2_u_0_s_0, *Preal_2_u_0_s_0;

struct real_2_u_0_s_0 {
    float x;
    float y;
};

union real_2_u_0 {
    struct real_2_u_0_s_0 _s_0;
    float data[2];
};

struct real_2 {
    union real_2_u_0 field0_0x0;
};

struct real_3_u_0_s_0 {
    float x;
    float y;
    float z;
};

struct real_3_u_0_s_2 {
    float __x0;
    struct real_2 yz;
};

union real_3_u_0 {
    struct real_3_u_0_s_0 _s_0;
    struct real_2 xy;
    struct real_3_u_0_s_2 _s_2;
    float data[3];
};

struct real_3 {
    union real_3_u_0 field0_0x0;
};

union real_3x3_u_0 {
    struct real_3 columns[3];
    float data[9];
};

typedef union settings_t_u_12 settings_t_u_12, *Psettings_t_u_12;

typedef struct keybinds_t keybinds_t, *Pkeybinds_t;

typedef union keybinds_t_u_68 keybinds_t_u_68, *Pkeybinds_t_u_68;

typedef struct keybinds_t_u_68_s_0 keybinds_t_u_68_s_0, *Pkeybinds_t_u_68_s_0;

struct keybinds_t_u_68_s_0 {
    int tool_select;
    int tool_draw;
    int tool_fill;
};

union keybinds_t_u_68 {
    struct keybinds_t_u_68_s_0 _s_0;
    int tools[3];
};

struct keybinds_t {
    int forward;
    int backward;
    int left;
    int right;
    int ability;
    int ability1;
    int ability2;
    int extend;
    int retract;
    int interact;
    int map;
    int zoom_in;
    int zoom_out;
    int edit;
    int inspect;
    int brush_bigger;
    int brush_smaller;
    union keybinds_t_u_68 field17_0x44;
    int toggle_symmetry;
    int toggle_icons;
    int editor_up;
    int editor_down;
    int editor_left;
    int editor_right;
    int editor_zoom_in;
    int editor_zoom_out;
    int console;
};

union settings_t_u_12 {
    struct keybinds_t keybinds;
    int buttons[29];
};

typedef struct final_boss_state_u_0_s_0 final_boss_state_u_0_s_0, *Pfinal_boss_state_u_0_s_0;

struct final_boss_state_u_0_s_0 {
    uchar active:1;
    uchar ready:1;
};

typedef union final_boss_state_u_0 final_boss_state_u_0, *Pfinal_boss_state_u_0;

union final_boss_state_u_0 {
    struct final_boss_state_u_0_s_0 _s_0;
    uchar active_flags;
};

typedef union audio_context_u_1752 audio_context_u_1752, *Paudio_context_u_1752;

union audio_context_u_1752 {
    float next_target_music_transition_speed;
    long next_target_music_transition_speed_data;
};

typedef struct int_3_u_0_s_0 int_3_u_0_s_0, *Pint_3_u_0_s_0;

struct int_3_u_0_s_0 {
    int x;
    int y;
    int z;
};

typedef struct int_3_u_0_s_2 int_3_u_0_s_2, *Pint_3_u_0_s_2;

typedef struct int_2 int_2, *Pint_2;

typedef union int_2_u_0 int_2_u_0, *Pint_2_u_0;

typedef struct int_2_u_0_s_0 int_2_u_0_s_0, *Pint_2_u_0_s_0;

struct int_2_u_0_s_0 {
    int x;
    int y;
};

union int_2_u_0 {
    struct int_2_u_0_s_0 _s_0;
    int data[2];
};

struct int_2 {
    union int_2_u_0 field0_0x0;
};

struct int_3_u_0_s_2 {
    int __x0;
    struct int_2 yz;
};

typedef union int_3_u_0 int_3_u_0, *Pint_3_u_0;

union int_3_u_0 {
    struct int_3_u_0_s_0 _s_0;
    struct int_2 xy;
    struct int_3_u_0_s_2 _s_2;
    int data[3];
};

typedef union looping_sound_u_32 looping_sound_u_32, *Plooping_sound_u_32;

union looping_sound_u_32 {
    float next_target_volume;
    long next_target_volume_data;
};

typedef struct body_u_316_s_0 body_u_316_s_0, *Pbody_u_316_s_0;

struct body_u_316_s_0 {
    uint portal_index:8;
    uint in_portal:1;
};

typedef struct body_u_704_s_1 body_u_704_s_1, *Pbody_u_704_s_1;

typedef struct mutation_item mutation_item, *Pmutation_item;

struct mutation_item {
    int mutation_index;
    int imbues[4];
    struct real_2 pos;
    float r;
    float r_dot;
};

struct body_u_704_s_1 {
    struct mutation_item *mutations;
    int n_mutations;
    int max_mutations;
};

typedef union body_u_316 body_u_316, *Pbody_u_316;

union body_u_316 {
    struct body_u_316_s_0 _s_0;
    uint portal_info;
};

typedef union body_u_704 body_u_704, *Pbody_u_704;

typedef struct mutation_item_list mutation_item_list, *Pmutation_item_list;

struct mutation_item_list {
    struct mutation_item *items;
    int n_items;
    int max_items;
};

union body_u_704 {
    struct mutation_item_list mutation_items;
    struct body_u_704_s_1 _s_1;
};

typedef struct material_t_u_76_s_0 material_t_u_76_s_0, *Pmaterial_t_u_76_s_0;

struct material_t_u_76_s_0 {
    uint attach_to_cells:1;
    uint attach_to_walls:1;
    uint poison_immune:1;
    uint no_electric_growth:1;
    uint penetrate_walls:1;
    uint self_touching:1;
    uint is_cancer:1;
    uint is_directional:1;
    uint show_adjacency:1;
    uint show_direction:1;
    uint is_hard:1;
    uint play_note:1;
    uint no_recolor:1;
};

typedef union material_t_u_76 material_t_u_76, *Pmaterial_t_u_76;

union material_t_u_76 {
    struct material_t_u_76_s_0 _s_0;
    uint flags;
};

typedef union world_u_14888 world_u_14888, *Pworld_u_14888;

typedef struct expandable_buffer expandable_buffer, *Pexpandable_buffer;

struct expandable_buffer {
    uchar *memory;
    ulong64 reserved_size;
    ulong64 committed_size;
};

union world_u_14888 {
    uchar *body_auxiliary_data;
    struct expandable_buffer body_auxiliary_data_memory;
};

typedef union world_u_14920 world_u_14920, *Pworld_u_14920;

typedef struct id_index id_index, *Pid_index;

union world_u_14920 {
    struct id_index *cell_index_table;
    struct expandable_buffer cell_index_table_memory;
};

struct id_index {
    int id;
    int index;
};

typedef union world_u_14944 world_u_14944, *Pworld_u_14944;

typedef struct cell cell, *Pcell;

typedef union cell_u_0 cell_u_0, *Pcell_u_0;

typedef union cell_u_64 cell_u_64, *Pcell_u_64;

typedef union cell_u_128 cell_u_128, *Pcell_u_128;

typedef union cell_u_192 cell_u_192, *Pcell_u_192;

typedef union cell_u_256 cell_u_256, *Pcell_u_256;

typedef union cell_u_320 cell_u_320, *Pcell_u_320;

typedef union cell_u_384 cell_u_384, *Pcell_u_384;

typedef union cell_u_1600 cell_u_1600, *Pcell_u_1600;

typedef union cell_u_1664 cell_u_1664, *Pcell_u_1664;

typedef union cell_u_1728 cell_u_1728, *Pcell_u_1728;

typedef union cell_u_1792 cell_u_1792, *Pcell_u_1792;

typedef union cell_u_1856 cell_u_1856, *Pcell_u_1856;

typedef union cell_u_1920 cell_u_1920, *Pcell_u_1920;

typedef union cell_u_1984 cell_u_1984, *Pcell_u_1984;

typedef union cell_u_2048 cell_u_2048, *Pcell_u_2048;

typedef union cell_u_2112 cell_u_2112, *Pcell_u_2112;

typedef union cell_u_2176 cell_u_2176, *Pcell_u_2176;

typedef union cell_u_2240 cell_u_2240, *Pcell_u_2240;

typedef union cell_u_2304 cell_u_2304, *Pcell_u_2304;

typedef union cell_u_2368 cell_u_2368, *Pcell_u_2368;

typedef union cell_u_2432 cell_u_2432, *Pcell_u_2432;

typedef union cell_u_2496 cell_u_2496, *Pcell_u_2496;

typedef union cell_u_2560 cell_u_2560, *Pcell_u_2560;

typedef union cell_u_2624 cell_u_2624, *Pcell_u_2624;

typedef union cell_u_2688 cell_u_2688, *Pcell_u_2688;

typedef union cell_u_2752 cell_u_2752, *Pcell_u_2752;

typedef union cell_u_2816 cell_u_2816, *Pcell_u_2816;

typedef union cell_u_2880 cell_u_2880, *Pcell_u_2880;

typedef union cell_u_2944 cell_u_2944, *Pcell_u_2944;

typedef union cell_u_3008 cell_u_3008, *Pcell_u_3008;

typedef union cell_u_3072 cell_u_3072, *Pcell_u_3072;

typedef union cell_u_3136 cell_u_3136, *Pcell_u_3136;

typedef union cell_u_3200 cell_u_3200, *Pcell_u_3200;

typedef union cell_u_3264 cell_u_3264, *Pcell_u_3264;

typedef union cell_u_3328 cell_u_3328, *Pcell_u_3328;

typedef union cell_u_3392 cell_u_3392, *Pcell_u_3392;

typedef union cell_u_3456 cell_u_3456, *Pcell_u_3456;

typedef union cell_u_3520 cell_u_3520, *Pcell_u_3520;

typedef union cell_u_3584 cell_u_3584, *Pcell_u_3584;

typedef union cell_u_4032 cell_u_4032, *Pcell_u_4032;

typedef union cell_u_4096 cell_u_4096, *Pcell_u_4096;

typedef union cell_u_4160 cell_u_4160, *Pcell_u_4160;

typedef union cell_u_4224 cell_u_4224, *Pcell_u_4224;

typedef union cell_u_4288 cell_u_4288, *Pcell_u_4288;

typedef union cell_u_4352 cell_u_4352, *Pcell_u_4352;

typedef union cell_u_4416 cell_u_4416, *Pcell_u_4416;

typedef union cell_u_4480 cell_u_4480, *Pcell_u_4480;

typedef union cell_u_4544 cell_u_4544, *Pcell_u_4544;

typedef union cell_u_4608 cell_u_4608, *Pcell_u_4608;

typedef union cell_u_4672 cell_u_4672, *Pcell_u_4672;

typedef union cell_u_4736 cell_u_4736, *Pcell_u_4736;

typedef union cell_u_4800 cell_u_4800, *Pcell_u_4800;

typedef union cell_u_4864 cell_u_4864, *Pcell_u_4864;

typedef union cell_u_4928 cell_u_4928, *Pcell_u_4928;

typedef union cell_u_4992 cell_u_4992, *Pcell_u_4992;

typedef union cell_u_5056 cell_u_5056, *Pcell_u_5056;

typedef union cell_u_5120 cell_u_5120, *Pcell_u_5120;

typedef union cell_u_5184 cell_u_5184, *Pcell_u_5184;

typedef union cell_u_5248 cell_u_5248, *Pcell_u_5248;

typedef union cell_u_5312 cell_u_5312, *Pcell_u_5312;

typedef union cell_u_5376 cell_u_5376, *Pcell_u_5376;

typedef union cell_u_5440 cell_u_5440, *Pcell_u_5440;

typedef struct cell_extra cell_extra, *Pcell_extra;

typedef struct cell_u_4096_s_2 cell_u_4096_s_2, *Pcell_u_4096_s_2;

typedef struct real_4 real_4, *Preal_4;

typedef struct contact contact, *Pcontact;

typedef struct wall_t wall_t, *Pwall_t;

typedef union real_4_u_0 real_4_u_0, *Preal_4_u_0;

typedef struct real_4_u_0_s_0 real_4_u_0_s_0, *Preal_4_u_0_s_0;

typedef struct real_4_u_0_s_2 real_4_u_0_s_2, *Preal_4_u_0_s_2;

typedef struct real_4_u_0_s_4 real_4_u_0_s_4, *Preal_4_u_0_s_4;

struct real_4_u_0_s_0 {
    float x;
    float y;
    float z;
    float w;
};

struct cell_u_4096_s_2 {
    uint open_sides:6;
    uint touched:1;
    uint health_gated:1;
    uint floodfill_needed:1;
    uint linking:1;
    uint link_attracting:1;
    uint self_touching:1;
    uint poison_immune:1;
    uint kill:1;
    uint nontrivial_bone:1;
    uint temp_rigid:1;
    uint stem_cell:1;
    uint cell_collision:1;
    uint no_explosive_regen_delay:1;
    uint has_brain_fn:1;
    uint recolored:1;
};

union cell_u_4096 {
    uint flags;
    uint flags_packed[16];
    struct cell_u_4096_s_2 _s_2;
};

union cell_u_3200 {
    float y_dot;
    float y_dot_packed[16];
};

union cell_u_3520 {
    float r;
    float r_packed[16];
};

union cell_u_2112 {
    float burn_damage;
    float burn_damage_packed[16];
};

struct real_4_u_0_s_2 {
    float __x0;
    struct real_2 yz;
};

struct real_4_u_0_s_4 {
    float _x0;
    struct real_3 yzw;
};

union real_4_u_0 {
    struct real_4_u_0_s_0 _s_0;
    struct real_2 xy;
    struct real_4_u_0_s_2 _s_2;
    struct real_3 xyz;
    struct real_4_u_0_s_4 _s_4;
    float data[4];
};

struct real_4 {
    union real_4_u_0 field0_0x0;
};

struct contact {
    struct cell *o;
    struct real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
};

union cell_u_2752 {
    float value;
    float value_packed[16];
};

union cell_u_2432 {
    float heat_damage_multiplier;
    float heat_damage_multiplier_packed[16];
};

struct wall_t {
    float dist;
    struct real_2 gradient;
    struct real_2 flow;
    float air_dist;
};

struct cell_extra {
    struct int_2 body_coord;
    struct real_4 color;
    struct contact *contacts;
    struct real_2 attached_world_pos;
    struct real_2 old_x;
    struct real_2 old_x_dot;
    struct real_2 old_curl;
    struct real_2 old_poison;
    struct real_2 global_body_force;
    struct wall_t wall;
    struct real_2 wall_x;
    struct cell *neighbors[6];
    struct cell *next_in_body;
    struct cell *next_in_bone;
};

union cell_u_1984 {
    float bloodless_damage;
    float bloodless_damage_packed[16];
};

union cell_u_1664 {
    float temperature;
    float temperature_packed[16];
};

union cell_u_192 {
    int material_index;
    int material_index_packed[16];
};

union cell_u_3008 {
    float x;
    float x_packed[16];
};

union cell_u_4416 {
    float wall_force;
    float wall_force_packed[16];
};

union cell_u_3328 {
    float rot_y;
    float rot_y_packed[16];
};

union cell_u_4736 {
    float voltage_multiplier;
    float voltage_multiplier_packed[16];
};

union cell_u_4928 {
    uint floodfilled;
    uint floodfilled_packed[16];
};

union cell_u_4608 {
    float phasing;
    float phasing_packed[16];
};

union cell_u_5184 {
    float equilibrium_voltage;
    float equilibrium_voltage_packed[16];
};

union cell_u_64 {
    int body_id;
    int body_id_packed[16];
};

union cell_u_5056 {
    float old_temperature;
    float old_temperature_packed[16];
};

union cell_u_3392 {
    float curl_x;
    float curl_x_packed[16];
};

union cell_u_384 {
    float peak_voltage;
    float peak_voltage_packed[16];
};

union cell_u_4288 {
    float stickyness;
    float stickyness_packed[16];
};

union cell_u_5376 {
    float total_heat_conductance;
    float total_heat_conductance_packed[16];
};

union cell_u_4800 {
    float rigidity;
    float rigidity_packed[16];
};

union cell_u_2624 {
    int mutagen_material_index;
    int mutagen_material_index_packed[16];
};

union cell_u_2304 {
    float dealt;
    float dealt_packed[16];
};

union cell_u_1856 {
    float health;
    float health_packed[16];
};

union cell_u_2944 {
    float mass;
    float mass_packed[16];
};

union cell_u_1728 {
    float frozen_multiplier;
    float frozen_multiplier_packed[16];
};

union cell_u_2816 {
    float value2;
    float value2_packed[16];
};

union cell_u_3456 {
    float curl_y;
    float curl_y_packed[16];
};

union cell_u_4544 {
    int linked;
    int linked_packed[16];
};

union cell_u_2688 {
    float leeching;
    float leeching_packed[16];
};

union cell_u_1792 {
    float maturity;
    float maturity_packed[16];
};

union cell_u_4224 {
    int n_contacts;
    int n_contacts_packed[16];
};

union cell_u_320 {
    float voltage_dot;
    float voltage_dot_packed[16];
};

union cell_u_2240 {
    float healing;
    float healing_packed[16];
};

union cell_u_1600 {
    float shock;
    float shock_packed[16];
};

union cell_u_5248 {
    float total_conductance;
    float total_conductance_packed[16];
};

union cell_u_4992 {
    float old_voltage;
    float old_voltage_packed[16];
};

union cell_u_2496 {
    float poison;
    float poison_packed[16];
};

union cell_u_3264 {
    float rot_x;
    float rot_x_packed[16];
};

union cell_u_256 {
    float voltage;
    float voltage_packed[16];
};

union cell_u_5440 {
    float wall_temperature;
    float wall_temperature_packed[16];
};

union cell_u_4032 {
    float target_spacing;
    float target_spacing_packed[16];
};

union cell_u_3072 {
    float y;
    float y_packed[16];
};

union cell_u_4864 {
    float stasis;
    float stasis_packed[16];
};

union cell_u_3136 {
    float x_dot;
    float x_dot_packed[16];
};

union cell_u_5312 {
    float equilibrium_temperature;
    float equilibrium_temperature_packed[16];
};

union cell_u_2880 {
    int n_colors;
    int n_colors_packed[16];
};

union cell_u_1920 {
    float damage;
    float damage_packed[16];
};

union cell_u_3584 {
    float base_r;
    float base_r_packed[16];
};

union cell_u_2176 {
    float ice_damage;
    float ice_damage_packed[16];
};

union cell_u_4352 {
    float stickyness_timer;
    float stickyness_timer_packed[16];
};

union cell_u_4160 {
    float light_radius;
    float light_radius_packed[16];
};

union cell_u_2368 {
    float explosive_damage_multiplier;
    float explosive_damage_multiplier_packed[16];
};

union cell_u_2560 {
    float mutagen;
    float mutagen_packed[16];
};

union cell_u_0 {
    int id;
    int id_packed[16];
};

union cell_u_5120 {
    float old_health;
    float old_health_packed[16];
};

union cell_u_4480 {
    int attached;
    int attached_packed[16];
};

union cell_u_2048 {
    float screenshakeless_damage;
    float screenshakeless_damage_packed[16];
};

union cell_u_4672 {
    float detected_light;
    float detected_light_packed[16];
};

union cell_u_128 {
    int bone_id;
    int bone_id_packed[16];
};

struct cell {
    union cell_u_0 field0_0x0;
    union cell_u_64 field1_0x40;
    union cell_u_128 field2_0x80;
    union cell_u_192 field3_0xc0;
    union cell_u_256 field4_0x100;
    union cell_u_320 field5_0x140;
    union cell_u_384 field6_0x180;
    float directional_voltage[96];
    float directional_eq_voltage[96];
    float directional_conductance[96];
    union cell_u_1600 field10_0x640;
    union cell_u_1664 field11_0x680;
    union cell_u_1728 field12_0x6c0;
    union cell_u_1792 field13_0x700;
    union cell_u_1856 field14_0x740;
    union cell_u_1920 field15_0x780;
    union cell_u_1984 field16_0x7c0;
    union cell_u_2048 field17_0x800;
    union cell_u_2112 field18_0x840;
    union cell_u_2176 field19_0x880;
    union cell_u_2240 field20_0x8c0;
    union cell_u_2304 field21_0x900;
    union cell_u_2368 field22_0x940;
    union cell_u_2432 field23_0x980;
    union cell_u_2496 field24_0x9c0;
    union cell_u_2560 field25_0xa00;
    union cell_u_2624 field26_0xa40;
    union cell_u_2688 field27_0xa80;
    union cell_u_2752 field28_0xac0;
    union cell_u_2816 field29_0xb00;
    union cell_u_2880 field30_0xb40;
    union cell_u_2944 field31_0xb80;
    union cell_u_3008 field32_0xbc0;
    union cell_u_3072 field33_0xc00;
    union cell_u_3136 field34_0xc40;
    union cell_u_3200 field35_0xc80;
    union cell_u_3264 field36_0xcc0;
    union cell_u_3328 field37_0xd00;
    union cell_u_3392 field38_0xd40;
    union cell_u_3456 field39_0xd80;
    union cell_u_3520 field40_0xdc0;
    union cell_u_3584 field41_0xe00;
    float spacing[96];
    union cell_u_4032 field43_0xfc0;
    union cell_u_4096 field44_0x1000;
    union cell_u_4160 field45_0x1040;
    union cell_u_4224 field46_0x1080;
    union cell_u_4288 field47_0x10c0;
    union cell_u_4352 field48_0x1100;
    union cell_u_4416 field49_0x1140;
    union cell_u_4480 field50_0x1180;
    union cell_u_4544 field51_0x11c0;
    union cell_u_4608 field52_0x1200;
    union cell_u_4672 field53_0x1240;
    union cell_u_4736 field54_0x1280;
    union cell_u_4800 field55_0x12c0;
    union cell_u_4864 field56_0x1300;
    union cell_u_4928 field57_0x1340;
    union cell_u_4992 field58_0x1380;
    union cell_u_5056 field59_0x13c0;
    union cell_u_5120 field60_0x1400;
    union cell_u_5184 field61_0x1440;
    union cell_u_5248 field62_0x1480;
    union cell_u_5312 field63_0x14c0;
    union cell_u_5376 field64_0x1500;
    union cell_u_5440 field65_0x1540;
    struct cell_extra extra_fields[16];
};

union world_u_14944 {
    struct cell *cells;
    struct expandable_buffer cells_memory;
};

typedef union world_u_15392 world_u_15392, *Pworld_u_15392;

typedef struct lightning_t lightning_t, *Plightning_t;

typedef union lightning_t_u_160 lightning_t_u_160, *Plightning_t_u_160;

typedef struct lightning_t_u_160_s_0 lightning_t_u_160_s_0, *Plightning_t_u_160_s_0;

struct lightning_t_u_160_s_0 {
    uint n_points:16;
    uint type:1;
};

union lightning_t_u_160 {
    struct lightning_t_u_160_s_0 _s_0;
    uint n_points_and_type;
};

struct lightning_t {
    int a;
    int b;
    struct real_2 dir;
    float range;
    float damage;
    float shock;
    int lifetime;
    struct real_2 points[16];
    union lightning_t_u_160 field8_0xa0;
    struct real_4 color;
};

union world_u_15392 {
    struct lightning_t *lightnings;
    struct expandable_buffer lightnings_memory;
};

typedef union world_u_15424 world_u_15424, *Pworld_u_15424;

typedef struct laser_t laser_t, *Plaser_t;

struct laser_t {
    int cell_id;
    struct real_2 x;
    struct real_2 dir;
    float heat;
    float width;
    float length;
};

union world_u_15424 {
    struct laser_t *lasers;
    struct expandable_buffer lasers_memory;
};

typedef union world_u_15456 world_u_15456, *Pworld_u_15456;

typedef struct explosion_t explosion_t, *Pexplosion_t;

typedef union explosion_t_u_32 explosion_t_u_32, *Pexplosion_t_u_32;

union world_u_15456 {
    struct explosion_t *explosions;
    struct expandable_buffer explosions_memory;
};

union explosion_t_u_32 {
    struct real_3 hsv;
    struct real_3 rgb;
};

struct explosion_t {
    struct real_2 x;
    float r;
    int duration;
    float damage;
    float knockback;
    float heat;
    float stasis;
    union explosion_t_u_32 field7_0x20;
    uint ignore_body;
    uint recolor:1;
};

typedef union world_u_15488 world_u_15488, *Pworld_u_15488;

typedef struct explosion_render_info explosion_render_info, *Pexplosion_render_info;

union world_u_15488 {
    struct explosion_render_info *explosion_visuals;
    struct expandable_buffer explosion_visuals_memory;
};

struct explosion_render_info {
    struct real_3 x;
    float r;
    float time;
    float duration;
    float distortion;
    struct real_4 color1;
    struct real_4 color2;
};

typedef union world_u_15520 world_u_15520, *Pworld_u_15520;

typedef struct radiant_render_info radiant_render_info, *Pradiant_render_info;

union world_u_15520 {
    struct radiant_render_info *radiant_visuals;
    struct expandable_buffer radiant_visuals_memory;
};

struct radiant_render_info {
    struct real_3 x;
    float r;
    float distortion;
    struct real_4 color;
};

typedef union world_u_15552 world_u_15552, *Pworld_u_15552;

typedef struct circle_render_info circle_render_info, *Pcircle_render_info;

struct circle_render_info {
    struct real_3 x;
    float r;
    struct real_4 color;
};

union world_u_15552 {
    struct circle_render_info *stasis_visuals;
    struct expandable_buffer stasis_visuals_memory;
};

typedef union world_u_15584 world_u_15584, *Pworld_u_15584;

typedef struct color_swatch_render_info color_swatch_render_info, *Pcolor_swatch_render_info;

struct color_swatch_render_info {
    struct real_3 x;
    float r;
    struct real_4 color;
    float scale;
    uint pinned;
};

union world_u_15584 {
    struct color_swatch_render_info *paint_visuals;
    struct expandable_buffer paint_visuals_memory;
};

typedef union world_u_15616 world_u_15616, *Pworld_u_15616;

typedef struct particle_pusher_t particle_pusher_t, *Pparticle_pusher_t;

union world_u_15616 {
    struct particle_pusher_t *particle_pushers;
    struct expandable_buffer particle_pushers_memory;
};

struct particle_pusher_t {
    struct real_2 x;
    struct real_2 d;
    float strength;
    float inv_dsq;
};

typedef union world_u_15648 world_u_15648, *Pworld_u_15648;

typedef struct link_attractor_t link_attractor_t, *Plink_attractor_t;

struct link_attractor_t {
    struct real_2 x;
    float strength;
    int bone_id;
};

union world_u_15648 {
    struct link_attractor_t *link_attractors;
    struct expandable_buffer link_attractors_memory;
};

typedef union world_u_15680 world_u_15680, *Pworld_u_15680;

typedef struct magnetic_field_t magnetic_field_t, *Pmagnetic_field_t;

union world_u_15680 {
    struct magnetic_field_t *magnetic_fields;
    struct expandable_buffer magnetic_fields_memory;
};

struct magnetic_field_t {
    struct cell *c;
    struct real_3 moment;
};

typedef union world_u_15744 world_u_15744, *Pworld_u_15744;

typedef struct mutation_pickup mutation_pickup, *Pmutation_pickup;

typedef struct pickup_node pickup_node, *Ppickup_node;

struct pickup_node {
    int mutation_index;
    struct real_2 x_rel;
    float r;
    float r_dot;
    float alpha;
    bool is_selected;
};

union world_u_15744 {
    struct mutation_pickup *mutation_pickups;
    struct expandable_buffer mutation_pickups_memory;
};

struct mutation_pickup {
    struct pickup_node nodes[16];
    int n_nodes;
    int imbues[4];
    int n_imbues;
    struct real_2 x;
    struct real_2 x_dot;
    float alpha;
    int selected;
    int pending_imbues;
    bool did_spawn;
};

typedef union world_u_15776 world_u_15776, *Pworld_u_15776;

typedef struct cell_pickup cell_pickup, *Pcell_pickup;

typedef union cell_pickup_u_36 cell_pickup_u_36, *Pcell_pickup_u_36;

typedef struct cell_pickup_u_36_s_0 cell_pickup_u_36_s_0, *Pcell_pickup_u_36_s_0;

struct cell_pickup_u_36_s_0 {
    uint selected:1;
    uint is_combo:1;
};

union world_u_15776 {
    struct cell_pickup *cell_pickups;
    struct expandable_buffer cell_pickups_memory;
};

union cell_pickup_u_36 {
    struct cell_pickup_u_36_s_0 _s_0;
    uint flags;
};

struct cell_pickup {
    int material_index;
    struct real_2 x;
    struct real_2 x_dot;
    float r;
    float r_dot;
    float alpha;
    float text_alpha;
    union cell_pickup_u_36 field7_0x24;
};

typedef union world_u_15808 world_u_15808, *Pworld_u_15808;

typedef struct particle_t particle_t, *Pparticle_t;

struct particle_t {
    int type;
    struct real_2 x;
    struct real_2 x_dot;
    struct real_2 x_spawn;
    int target;
    float r;
    float r_dot;
    int time;
    int duration;
    struct real_4 color;
    struct real_4 color_initial;
    struct real_4 color_final;
    struct real_4 emission;
    float emission_radius;
    bool affects_gameplay;
};

union world_u_15808 {
    struct particle_t *particles;
    struct expandable_buffer particles_memory;
};

typedef union world_u_15840 world_u_15840, *Pworld_u_15840;

typedef struct acid_particle_16 acid_particle_16, *Pacid_particle_16;

union world_u_15840 {
    struct acid_particle_16 *acid_particles;
    struct expandable_buffer acid_particles_memory;
};

struct acid_particle_16 {
    float x[16];
    float y[16];
    float x_dot[16];
    float y_dot[16];
    float r[16];
    float r_dot[16];
    int time[16];
    struct real_4 color_initial[16];
    struct real_4 color_final[16];
};

typedef union world_u_15872 world_u_15872, *Pworld_u_15872;

typedef struct biome_type biome_type, *Pbiome_type;

typedef struct cell_pool cell_pool, *Pcell_pool;

union world_u_15872 {
    struct biome_type *biome_types;
    struct expandable_buffer biome_types_memory;
};

struct cell_pool {
    int material_indices[2048];
    float material_cum_chances[2048];
    int n_materials;
};

struct biome_type {
    uint id;
    struct real_3 color;
    float light;
    float bumpyness;
    float temperature;
    uint tracked:1;
    uint explored:1;
    uint no_modifiers:1;
    uint custom_cell_spawning;
    int ambient_music_id;
    int battle_music_id;
    float noise_amount;
    float fbm_amount;
    float fbm_base_frequency;
    float fbm_octives;
    float fbm_gain;
    float neighbor_fbm;
    float neighbor_amount;
    float base_amount;
    float min_value;
    float cell_chance;
    int cell_max_neighbors;
    struct cell_pool pool;
    uint creature_ids[256];
    int creature_xps[256];
    float creature_cum_chances[256];
    float creature_teams[256];
    int n_creatures;
    uint plant_ids[256];
    int plant_xps[256];
    float plant_cum_chances[256];
    int n_plants;
    int modifiers[16];
    int n_modifiers;
};

typedef union world_u_15904 world_u_15904, *Pworld_u_15904;

typedef struct biome_modifier biome_modifier, *Pbiome_modifier;

typedef struct biome_core biome_core, *Pbiome_core;

typedef struct body body, *Pbody;

typedef struct bounding_box_2 bounding_box_2, *Pbounding_box_2;

typedef struct body_plan body_plan, *Pbody_plan;

typedef struct boss_part_t boss_part_t, *Pboss_part_t;

typedef struct brain_t brain_t, *Pbrain_t;

typedef struct plan_cell plan_cell, *Pplan_cell;

typedef union plan_cell_u_32 plan_cell_u_32, *Pplan_cell_u_32;

typedef struct plan_cell_u_32_s_0 plan_cell_u_32_s_0, *Pplan_cell_u_32_s_0;

struct bounding_box_2 {
    struct int_2 l;
    struct int_2 u;
};

struct body_plan {
    struct plan_cell *plan_cells;
    int n_plan_cells;
    int max_plan_cells;
    int n_dragged_cells;
    int *plan_id_map;
    struct bounding_box_2 region;
    int half_hex_rotation;
};

struct brain_t {
    struct real_2 movement;
    float rotation;
    struct real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[3];
    void (*fun)(struct body *);
    struct real_2 old_movement;
    float old_rotation;
    struct real_2 old_grab_target;
    float old_grab_weight;
    float old_grab_dir;
    bool old_abilities[3];
    int target;
    int old_target;
    int action;
    struct real_2 target_point;
    double values[32];
};

struct body {
    int id;
    int creature_index;
    struct body_plan plan;
    int *cell_map;
    struct cell *first_cell;
    struct cell *last_cell;
    int parent_id;
    float team;
    struct boss_part_t *boss_part;
    float cost_limit;
    float max_health;
    float total_cost;
    float age;
    int xp;
    int next_levelup;
    int last_levelup;
    int level;
    float xp_timer;
    float xp_alpha;
    float cost_discount;
    float bonus_health_multiplier;
    uint loaded:1;
    uint floodfill_needed:1;
    uint rooted:1;
    uint snap:1;
    uint touched:1;
    uint is_boss:1;
    uint is_safe:1;
    uint kill:1;
    uint kill_slowly:1;
    uint unload:1;
    uint show_damage_numbers:1;
    uint plan_modified:1;
    uint cell_collision:1;
    uint no_regen_delay:1;
    uint regen_boost;
    float avg_phasing;
    struct real_2 spawn_x;
    int n_cells;
    struct real_2 center_of_mass;
    struct real_2 old_center_of_mass;
    struct real_2 center_of_mass_dot;
    struct real_2 old_center_of_mass_dot;
    float radius;
    float mass;
    float invmass;
    float cell_cost;
    float max_grown;
    float health;
    float damage;
    float damage_timer;
    float poison_damage;
    float burn_damage;
    float healing;
    struct real_2 cost_centroid;
    struct real_2 orientation;
    struct real_2 old_orientation;
    float omega;
    struct real_2 global_body_force;
    float wall_force;
    float old_wall_force;
    float avg_shock;
    float avg_temperature;
    float vision_radius;
    float damage_number;
    float damage_number_timer;
    union body_u_316 field66_0x13c;
    float portal_timer;
    struct brain_t brain;
    struct wall_t nearest_wall;
    union body_u_704 field70_0x2c0;
};

struct biome_modifier {
    char *id;
    void (*generation_fn)(struct biome_core *);
    void (*creature_fn)(struct body *);
    float chance;
};

struct biome_core {
    int biome_index;
    int guardian_id;
    int target_size;
    int n_hexes;
    struct bounding_box_2 bounds;
    struct int_2 entrance_points[32];
    int n_entrance_points;
    ulong64 mergable_cores;
    int modifiers[16];
    int n_modifiers;
    int n_default_modifiers;
    uint no_creatures:1;
};

union world_u_15904 {
    struct biome_modifier *biome_modifiers;
    struct expandable_buffer biome_modifiers_memory;
};

struct boss_part_t {
    int type;
    int creature_index;
    int body_id;
    int part_index;
    struct int_2 pinned_cells[32];
    int n_pinned_cells;
    struct real_2 offset;
    struct real_2 base_x;
    struct real_2 x;
    struct real_2 x_dot;
    struct real_2 orientation;
};

struct plan_cell_u_32_s_0 {
    uchar selected_symmetry_index;
    uchar pending_selected;
};

union plan_cell_u_32 {
    struct plan_cell_u_32_s_0 _s_0;
    uint selected;
};

struct plan_cell {
    int material_index;
    struct real_4 color;
    struct int_2 body_coord;
    int respawn_timer;
    union plan_cell_u_32 field4_0x20;
    uint floodfilled;
    float r;
    float r_dot;
    uint temporary:1;
};

typedef struct pmf_21b2b88d pmf_21b2b88d, *Ppmf_21b2b88d;

struct pmf_21b2b88d { /* void struct steam_callbacks<0,fwdref hasuniquename>{} ::(::* <pmf16_nearnvsa> struct steam_callbacks<0,fwdref hasuniquename>{}  )(struct CreateItemResult_t<0,fwdref hasuniquename>{} far64*  , T_BOOL08)<struct steam_callbacks<0,fwdref hasuniquename>{} far64*const  this ,0,2,> */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef struct pmf_6a51ca05 pmf_6a51ca05, *Ppmf_6a51ca05;

struct pmf_6a51ca05 { /* void struct steam_callbacks<0,fwdref hasuniquename>{} ::(::* <pmf16_nearnvsa> struct steam_callbacks<0,fwdref hasuniquename>{}  )(struct SteamUGCQueryCompleted_t<0,fwdref hasuniquename>{} far64*  , T_BOOL08)<struct steam_callbacks<0,fwdref hasuniquename>{} far64*const  this ,0,2,> */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef struct pmf_72c97792 pmf_72c97792, *Ppmf_72c97792;

struct pmf_72c97792 { /* void struct steam_callbacks<0,fwdref hasuniquename>{} ::(::* <pmf16_nearnvsa> struct steam_callbacks<0,fwdref hasuniquename>{}  )(struct SubmitItemUpdateResult_t<0,fwdref hasuniquename>{} far64*  , T_BOOL08)<struct steam_callbacks<0,fwdref hasuniquename>{} far64*const  this ,0,2,> */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef struct CCallbackInternal_OnGameOverlayActivated CCallbackInternal_OnGameOverlayActivated, *PCCallbackInternal_OnGameOverlayActivated;

struct CCallbackInternal_OnGameOverlayActivated {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
};

typedef union body_id_table_u_0 body_id_table_u_0, *Pbody_id_table_u_0;

union body_id_table_u_0 {
    struct id_index *index_table;
    struct expandable_buffer index_table_memory;
};

typedef union body_id_table_u_32 body_id_table_u_32, *Pbody_id_table_u_32;

union body_id_table_u_32 {
    struct body *elements;
    struct expandable_buffer elements_memory;
};

typedef union int_2x2_u_0 int_2x2_u_0, *Pint_2x2_u_0;

union int_2x2_u_0 {
    struct int_2 columns[2];
    int data[4];
};

typedef struct uint_4_u_0_s_0 uint_4_u_0_s_0, *Puint_4_u_0_s_0;

struct uint_4_u_0_s_0 {
    uint x;
    uint y;
    uint z;
    uint w;
};

typedef struct uint_4_u_0_s_2 uint_4_u_0_s_2, *Puint_4_u_0_s_2;

typedef struct uint_2 uint_2, *Puint_2;

typedef union uint_2_u_0 uint_2_u_0, *Puint_2_u_0;

typedef struct uint_2_u_0_s_0 uint_2_u_0_s_0, *Puint_2_u_0_s_0;

struct uint_2_u_0_s_0 {
    uint x;
    uint y;
};

union uint_2_u_0 {
    struct uint_2_u_0_s_0 _s_0;
    uint data[2];
};

struct uint_2 {
    union uint_2_u_0 field0_0x0;
};

struct uint_4_u_0_s_2 {
    uint __x0;
    struct uint_2 yz;
};

typedef struct uint_4_u_0_s_4 uint_4_u_0_s_4, *Puint_4_u_0_s_4;

typedef struct uint_3 uint_3, *Puint_3;

typedef union uint_3_u_0 uint_3_u_0, *Puint_3_u_0;

typedef struct uint_3_u_0_s_0 uint_3_u_0_s_0, *Puint_3_u_0_s_0;

typedef struct uint_3_u_0_s_2 uint_3_u_0_s_2, *Puint_3_u_0_s_2;

struct uint_3_u_0_s_0 {
    uint x;
    uint y;
    uint z;
};

struct uint_3_u_0_s_2 {
    uint __x0;
    struct uint_2 yz;
};

union uint_3_u_0 {
    struct uint_3_u_0_s_0 _s_0;
    struct uint_2 xy;
    struct uint_3_u_0_s_2 _s_2;
    uint data[3];
};

struct uint_3 {
    union uint_3_u_0 field0_0x0;
};

struct uint_4_u_0_s_4 {
    uint _x0;
    struct uint_3 yzw;
};

typedef union uint_4_u_0 uint_4_u_0, *Puint_4_u_0;

union uint_4_u_0 {
    struct uint_4_u_0_s_0 _s_0;
    struct uint_2 xy;
    struct uint_4_u_0_s_2 _s_2;
    struct uint_3 xyz;
    struct uint_4_u_0_s_4 _s_4;
    uint data[4];
};

typedef struct render_context_u_200_s_0 render_context_u_200_s_0, *Prender_context_u_200_s_0;

struct render_context_u_200_s_0 {
    uint color_texture;
    uint post_color_texture;
    uint post_effects_texture;
    uint background_textures[2];
    uint cell_color_texture;
    uint cell_material_texture;
    uint lighting_texture;
    uint edit_distance_texture;
};

typedef struct render_context_u_296_s_0 render_context_u_296_s_0, *Prender_context_u_296_s_0;

typedef struct font_info font_info, *Pfont_info;

typedef struct stbtt_fontinfo stbtt_fontinfo, *Pstbtt_fontinfo;

typedef struct stbtt_packedchar stbtt_packedchar, *Pstbtt_packedchar;

typedef struct stbtt__buf stbtt__buf, *Pstbtt__buf;

struct stbtt__buf {
    uchar *data;
    int cursor;
    int size;
};

struct stbtt_packedchar {
    ushort x0;
    ushort y0;
    ushort x1;
    ushort y1;
    float xoff;
    float yoff;
    float xadvance;
    float xoff2;
    float yoff2;
};

struct stbtt_fontinfo {
    void *userdata;
    uchar *data;
    int fontstart;
    int numGlyphs;
    int loca;
    int head;
    int glyf;
    int hhea;
    int hmtx;
    int kern;
    int gpos;
    int svg;
    int index_map;
    int indexToLocFormat;
    struct stbtt__buf cff;
    struct stbtt__buf charstrings;
    struct stbtt__buf gsubrs;
    struct stbtt__buf subrs;
    struct stbtt__buf fontdicts;
    struct stbtt__buf fdselect;
};

struct font_info {
    uint texture;
    struct stbtt_fontinfo info;
    float size;
    struct stbtt_packedchar *char_data;
};

struct render_context_u_296_s_0 {
    struct font_info small_font;
    struct font_info default_font;
    struct font_info medium_font;
    struct font_info big_font;
};

typedef union render_context_u_200 render_context_u_200, *Prender_context_u_200;

union render_context_u_200 {
    struct render_context_u_200_s_0 _s_0;
    uint textures[9];
};

typedef union render_context_u_296 render_context_u_296, *Prender_context_u_296;

union render_context_u_296 {
    struct render_context_u_296_s_0 _s_0;
    struct font_info font_infos[4];
};

typedef union bone_id_table_u_0 bone_id_table_u_0, *Pbone_id_table_u_0;

union bone_id_table_u_0 {
    struct id_index *index_table;
    struct expandable_buffer index_table_memory;
};

typedef union bone_id_table_u_32 bone_id_table_u_32, *Pbone_id_table_u_32;

typedef struct bone bone, *Pbone;

union bone_id_table_u_32 {
    struct bone *elements;
    struct expandable_buffer elements_memory;
};

struct bone {
    int id;
    float mass;
    float inertia;
    float spacing;
    struct real_2 center_of_mass;
    struct real_2 center_of_mass_dot;
    struct real_2 orientation;
    float omega;
    int n_cells;
    struct real_2 plan_center;
    struct cell *first_cell;
    struct cell *last_cell;
    uint merge_id;
    uint floodfill_needed:1;
};

typedef union edit_menu_u_64 edit_menu_u_64, *Pedit_menu_u_64;

typedef struct cell_item cell_item, *Pcell_item;

typedef struct draggable_button draggable_button, *Pdraggable_button;

struct draggable_button {
    struct real_2 x;
    struct real_2 x_dot;
    struct real_2 x_brown;
    struct real_2 x_brown_dot;
    struct real_2 x_offset;
    float r;
    float r_dot;
    float selection_theta;
    float hovered;
    float selected;
    bool was_hovered;
    bool pinned;
};

union edit_menu_u_64 {
    struct cell_item *cell_items;
    struct expandable_buffer cell_items_memory;
};

struct cell_item {
    int material_index;
    struct draggable_button button;
    uint filtered:1;
};

typedef union edit_menu_u_8456 edit_menu_u_8456, *Pedit_menu_u_8456;

typedef struct stashed_body_plan stashed_body_plan, *Pstashed_body_plan;

struct stashed_body_plan {
    struct body_plan plan;
    char name[512];
    struct real_2 pos;
};

union edit_menu_u_8456 {
    struct stashed_body_plan *stashed;
    struct expandable_buffer stashed_memory;
};

typedef union edit_menu_u_8488 edit_menu_u_8488, *Pedit_menu_u_8488;

typedef struct saved_body_plan saved_body_plan, *Psaved_body_plan;

union edit_menu_u_8488 {
    struct saved_body_plan *saved;
    struct expandable_buffer saved_memory;
};

struct saved_body_plan {
    uint is_folder:1;
    uint expanded:1;
    uint level:30;
    char name[512];
    struct real_2 pos;
    float expand_t;
};

typedef union edit_menu_u_8520 edit_menu_u_8520, *Pedit_menu_u_8520;

typedef struct workshop_body_plan workshop_body_plan, *Pworkshop_body_plan;

union edit_menu_u_8520 {
    struct workshop_body_plan *workshop;
    struct expandable_buffer workshop_memory;
};

struct workshop_body_plan {
    ulong64 workshop_id;
    char name[512];
    char path[512];
    struct real_2 pos;
};

typedef union edit_menu_u_8552 edit_menu_u_8552, *Pedit_menu_u_8552;

typedef struct static_button static_button, *Pstatic_button;

union edit_menu_u_8552 {
    struct static_button *panel_buttons;
    struct expandable_buffer panel_buttons_memory;
};

struct static_button {
    float r;
    float r_dot;
    float state;
    float tooltip_alpha;
    bool was_hovered;
};

typedef union real_4x4_u_0 real_4x4_u_0, *Preal_4x4_u_0;

union real_4x4_u_0 {
    struct real_4 columns[4];
    float data[16];
};

typedef struct uint8_4_u_0_s_0 uint8_4_u_0_s_0, *Puint8_4_u_0_s_0;

struct uint8_4_u_0_s_0 {
    uchar x;
    uchar y;
    uchar z;
    uchar w;
};

typedef struct uint8_4_u_0_s_2 uint8_4_u_0_s_2, *Puint8_4_u_0_s_2;

typedef struct uint8_2 uint8_2, *Puint8_2;

typedef union uint8_2_u_0 uint8_2_u_0, *Puint8_2_u_0;

typedef struct uint8_2_u_0_s_0 uint8_2_u_0_s_0, *Puint8_2_u_0_s_0;

struct uint8_2_u_0_s_0 {
    uchar x;
    uchar y;
};

union uint8_2_u_0 {
    struct uint8_2_u_0_s_0 _s_0;
    uchar data[2];
};

struct uint8_2 {
    union uint8_2_u_0 field0_0x0;
};

struct uint8_4_u_0_s_2 {
    uchar __x0;
    struct uint8_2 yz;
};

typedef struct uint8_4_u_0_s_4 uint8_4_u_0_s_4, *Puint8_4_u_0_s_4;

typedef struct uint8_3 uint8_3, *Puint8_3;

typedef union uint8_3_u_0 uint8_3_u_0, *Puint8_3_u_0;

typedef struct uint8_3_u_0_s_0 uint8_3_u_0_s_0, *Puint8_3_u_0_s_0;

typedef struct uint8_3_u_0_s_2 uint8_3_u_0_s_2, *Puint8_3_u_0_s_2;

struct uint8_3_u_0_s_2 {
    uchar __x0;
    struct uint8_2 yz;
};

struct uint8_3_u_0_s_0 {
    uchar x;
    uchar y;
    uchar z;
};

union uint8_3_u_0 {
    struct uint8_3_u_0_s_0 _s_0;
    struct uint8_2 xy;
    struct uint8_3_u_0_s_2 _s_2;
    uchar data[3];
};

struct uint8_3 {
    union uint8_3_u_0 field0_0x0;
};

struct uint8_4_u_0_s_4 {
    uchar _x0;
    struct uint8_3 yzw;
};

typedef union uint8_4_u_0 uint8_4_u_0, *Puint8_4_u_0;

union uint8_4_u_0 {
    struct uint8_4_u_0_s_0 _s_0;
    struct uint8_2 xy;
    struct uint8_4_u_0_s_2 _s_2;
    struct uint8_3 xyz;
    struct uint8_4_u_0_s_4 _s_4;
    uchar data[4];
};

typedef struct context_t_u_0_s_0 context_t_u_0_s_0, *Pcontext_t_u_0_s_0;

typedef struct lane_group_t lane_group_t, *Plane_group_t;

struct context_t_u_0_s_0 {
    int lane_index;
    struct lane_group_t *group;
};

typedef union context_t_u_0 context_t_u_0, *Pcontext_t_u_0;

typedef struct lane_context_t lane_context_t, *Plane_context_t;

struct lane_context_t {
    int lane_index;
    struct lane_group_t *group;
};

union context_t_u_0 {
    struct context_t_u_0_s_0 _s_0;
    struct lane_context_t current_lane_context;
};

typedef union brown_sound_u_16 brown_sound_u_16, *Pbrown_sound_u_16;

union brown_sound_u_16 {
    float next_target_volume;
    long next_target_volume_data;
};

typedef union brown_sound_u_28 brown_sound_u_28, *Pbrown_sound_u_28;

union brown_sound_u_28 {
    float next_lowpass;
    long next_lowpass_data;
};

typedef struct int_3 int_3, *Pint_3;

struct int_3 {
    union int_3_u_0 field0_0x0;
};