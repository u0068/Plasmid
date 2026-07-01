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


typedef struct singing_channel singing_channel, *Psinging_channel;

typedef union singing_channel_u_12 singing_channel_u_12, *Psinging_channel_u_12;

union singing_channel_u_12 {
    float next_target_volume;
    long next_target_volume_data;
};

struct singing_channel {
    float volume;
    float target_volume;
    float phase;
    union singing_channel_u_12 field3_0xc;
};

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

typedef struct int_2 int_2, *Pint_2;

typedef struct real_4 real_4, *Preal_4;

typedef struct contact contact, *Pcontact;

typedef struct real_2 real_2, *Preal_2;

typedef struct wall_t wall_t, *Pwall_t;

typedef union int_2_u_0 int_2_u_0, *Pint_2_u_0;

typedef union real_4_u_0 real_4_u_0, *Preal_4_u_0;

typedef union real_2_u_0 real_2_u_0, *Preal_2_u_0;

typedef struct int_2_u_0_s_0 int_2_u_0_s_0, *Pint_2_u_0_s_0;

typedef struct real_4_u_0_s_0 real_4_u_0_s_0, *Preal_4_u_0_s_0;

typedef struct real_4_u_0_s_2 real_4_u_0_s_2, *Preal_4_u_0_s_2;

typedef struct real_3 real_3, *Preal_3;

typedef struct real_4_u_0_s_4 real_4_u_0_s_4, *Preal_4_u_0_s_4;

typedef struct real_2_u_0_s_0 real_2_u_0_s_0, *Preal_2_u_0_s_0;

typedef union real_3_u_0 real_3_u_0, *Preal_3_u_0;

typedef struct real_3_u_0_s_0 real_3_u_0_s_0, *Preal_3_u_0_s_0;

typedef struct real_3_u_0_s_2 real_3_u_0_s_2, *Preal_3_u_0_s_2;

struct real_4_u_0_s_0 {
    float x;
    float y;
    float z;
    float w;
};

struct real_2_u_0_s_0 {
    float x;
    float y;
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

union real_2_u_0 {
    struct real_2_u_0_s_0 _s_0;
    float data[2];
};

struct real_2 {
    union real_2_u_0 field0_0x0;
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

union cell_u_2048 {
    float screenshakeless_damage;
    float screenshakeless_damage_packed[16];
};

union cell_u_5312 {
    float equilibrium_temperature;
    float equilibrium_temperature_packed[16];
};

union cell_u_2560 {
    float mutagen;
    float mutagen_packed[16];
};

union cell_u_2880 {
    int n_colors;
    int n_colors_packed[16];
};

union cell_u_128 {
    int bone_id;
    int bone_id_packed[16];
};

union cell_u_1920 {
    float damage;
    float damage_packed[16];
};

union cell_u_0 {
    int id;
    int id_packed[16];
};

union cell_u_3584 {
    float base_r;
    float base_r_packed[16];
};

union cell_u_4672 {
    float detected_light;
    float detected_light_packed[16];
};

union cell_u_2176 {
    float ice_damage;
    float ice_damage_packed[16];
};

union cell_u_5120 {
    float old_health;
    float old_health_packed[16];
};

union cell_u_4352 {
    float stickyness_timer;
    float stickyness_timer_packed[16];
};

union cell_u_4480 {
    int attached;
    int attached_packed[16];
};

union cell_u_4160 {
    float light_radius;
    float light_radius_packed[16];
};

union cell_u_4864 {
    float stasis;
    float stasis_packed[16];
};

union cell_u_3136 {
    float x_dot;
    float x_dot_packed[16];
};

union cell_u_1792 {
    float maturity;
    float maturity_packed[16];
};

union cell_u_320 {
    float voltage_dot;
    float voltage_dot_packed[16];
};

union cell_u_1600 {
    float shock;
    float shock_packed[16];
};

union cell_u_4992 {
    float old_voltage;
    float old_voltage_packed[16];
};

union cell_u_3264 {
    float rot_x;
    float rot_x_packed[16];
};

union cell_u_5440 {
    float wall_temperature;
    float wall_temperature_packed[16];
};

union cell_u_3072 {
    float y;
    float y_packed[16];
};

union cell_u_2368 {
    float explosive_damage_multiplier;
    float explosive_damage_multiplier_packed[16];
};

union cell_u_4224 {
    int n_contacts;
    int n_contacts_packed[16];
};

union cell_u_5248 {
    float total_conductance;
    float total_conductance_packed[16];
};

union cell_u_256 {
    float voltage;
    float voltage_packed[16];
};

union cell_u_2496 {
    float poison;
    float poison_packed[16];
};

union cell_u_2240 {
    float healing;
    float healing_packed[16];
};

union cell_u_4032 {
    float target_spacing;
    float target_spacing_packed[16];
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

typedef struct final_boss_state final_boss_state, *Pfinal_boss_state;

typedef union final_boss_state_u_0 final_boss_state_u_0, *Pfinal_boss_state_u_0;

typedef struct final_boss_state_u_0_s_0 final_boss_state_u_0_s_0, *Pfinal_boss_state_u_0_s_0;

struct final_boss_state_u_0_s_0 {
    uchar active:1;
    uchar ready:1;
};

union final_boss_state_u_0 {
    struct final_boss_state_u_0_s_0 _s_0;
    uchar active_flags;
};

struct final_boss_state {
    union final_boss_state_u_0 field0_0x0;
    bool dead;
    struct real_2 x;
    float health;
    float max_health;
    int attack;
    int stage;
    int rotation;
    float timer;
    float t;
    float radius;
    struct real_2 stretch;
    struct real_2 offset;
    struct real_2 healthbar_pos;
    float temperature;
    float spawn_t;
    float death_t;
    float cell_cost;
    float max_grown;
    float total_health;
    float total_max_health;
};

typedef struct saver_t saver_t, *Psaver_t;

struct saver_t {
    uint pending_save;
    char temp_player_filename[256];
    char temp_world_filename[256];
    char final_player_filename[256];
    char final_world_filename[256];
    uchar *serialized_player;
    ulong64 max_serialized_player_size;
    ulong64 serialized_player_size;
    ulong64 player_written_size;
    uchar *serialized_world;
    ulong64 max_serialized_world_size;
    ulong64 serialized_world_size;
    ulong64 world_written_size;
    void *world_file;
    void *player_file;
    void *world_filemapping;
    void *player_filemapping;
    uchar *world_mapview;
    uchar *player_mapview;
    char *save_dir;
    char settings_filename[1024];
    char run_history_filename[1024];
    char recording_dir[1024];
    char normal_save_dir[1024];
    char sandbox_save_dir[1024];
    char user_body_plans_dir[1024];
    char temp_dir[1024];
    char workshop_dir[1024];
    char appdata_path[1024];
    char userdata_path[1024];
};

typedef enum MENU {
    MENU_NONE=0,
    MENU_PAUSE=1,
    MENU_EDIT=2,
    MENU_RECORD=3,
    MENU_WISHLIST=4,
    N_MENUS=5
} MENU;

typedef struct genode genode, *Pgenode;

struct genode {
    int type;
    struct int_2 p;
    struct real_2 dir;
    float length;
};

typedef struct doorway doorway, *Pdoorway;

struct doorway {
    int rooms[3];
    int n_rooms;
    struct int_2 pos;
    int first_cell;
    int n_cells;
    float value;
    int adjacent_doors[6];
    uint changed:2;
};

typedef struct laser_t laser_t, *Plaser_t;

struct laser_t {
    int cell_id;
    struct real_2 x;
    struct real_2 dir;
    float heat;
    float width;
    float length;
};

typedef struct biome_node biome_node, *Pbiome_node;

typedef struct biome_edge biome_edge, *Pbiome_edge;

struct biome_edge {
    struct biome_node *node;
    struct biome_edge *next;
    struct real_2 dir;
    float spacing;
    float randomness;
    float stiffness;
    float bias;
    uint virtual_edge:1;
};

struct biome_node {
    int core_index;
    struct real_2 x;
    float r;
    uint snap:1;
    struct biome_edge *first_edge;
    void (*pre_generation_fn)(struct biome_node *);
    void (*post_generation_fn)(struct biome_node *);
};

typedef ulong64 size_t;

typedef struct particle_type_t particle_type_t, *Pparticle_type_t;

struct particle_type_t {
    bool streak;
    bool draw_on_top;
};

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

typedef struct saved_body_plan saved_body_plan, *Psaved_body_plan;

struct saved_body_plan {
    uint is_folder:1;
    uint expanded:1;
    uint level:30;
    char name[512];
    struct real_2 pos;
    float expand_t;
};

typedef struct light_reciever_t light_reciever_t, *Plight_reciever_t;

struct light_reciever_t {
    struct real_2 x;
    struct real_3 hsv;
    float radius_sq;
};

typedef struct magnetic_field_t magnetic_field_t, *Pmagnetic_field_t;

struct magnetic_field_t {
    struct cell *c;
    struct real_3 moment;
};

typedef struct recording_buffer recording_buffer, *Precording_buffer;

typedef struct uint8_4 uint8_4, *Puint8_4;

typedef union uint8_4_u_0 uint8_4_u_0, *Puint8_4_u_0;

typedef struct uint8_4_u_0_s_0 uint8_4_u_0_s_0, *Puint8_4_u_0_s_0;

typedef struct uint8_2 uint8_2, *Puint8_2;

typedef struct uint8_4_u_0_s_2 uint8_4_u_0_s_2, *Puint8_4_u_0_s_2;

typedef struct uint8_3 uint8_3, *Puint8_3;

typedef struct uint8_4_u_0_s_4 uint8_4_u_0_s_4, *Puint8_4_u_0_s_4;

typedef union uint8_2_u_0 uint8_2_u_0, *Puint8_2_u_0;

typedef union uint8_3_u_0 uint8_3_u_0, *Puint8_3_u_0;

typedef struct uint8_2_u_0_s_0 uint8_2_u_0_s_0, *Puint8_2_u_0_s_0;

typedef struct uint8_3_u_0_s_0 uint8_3_u_0_s_0, *Puint8_3_u_0_s_0;

typedef struct uint8_3_u_0_s_2 uint8_3_u_0_s_2, *Puint8_3_u_0_s_2;

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

struct uint8_3_u_0_s_2 {
    uchar __x0;
    struct uint8_2 yz;
};

struct uint8_3_u_0_s_0 {
    uchar x;
    uchar y;
    uchar z;
};

struct recording_buffer {
    uint frame_buffer;
    uint *textures;
    int n_textures;
    struct uint8_4 *data;
    struct int_2 resolution;
    int buffer_length;
    int current_frame;
    int n_frames;
    bool initialized;
    float centiseconds;
};

struct uint8_4_u_0_s_2 {
    uchar __x0;
    struct uint8_2 yz;
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

struct uint8_4_u_0_s_0 {
    uchar x;
    uchar y;
    uchar z;
    uchar w;
};

union uint8_4_u_0 {
    struct uint8_4_u_0_s_0 _s_0;
    struct uint8_2 xy;
    struct uint8_4_u_0_s_2 _s_2;
    struct uint8_3 xyz;
    struct uint8_4_u_0_s_4 _s_4;
    uchar data[4];
};

struct uint8_4 {
    union uint8_4_u_0 field0_0x0;
};

typedef float real;

typedef struct cell *cell_pointer_array[6];

typedef struct hexagon_render_info hexagon_render_info, *Phexagon_render_info;

struct hexagon_render_info {
    struct real_3 x;
    struct real_2 r;
    struct real_4 color;
};

typedef struct inspector_menu inspector_menu, *Pinspector_menu;

typedef struct tooltip_t tooltip_t, *Ptooltip_t;

struct tooltip_t {
    struct real_2 box_size;
    struct real_2 pos;
    float alpha;
    int last_hovered_index;
    int last_hovered_type;
    int last_hovered_imbue;
    struct real_2 last_hovered_mutation_pos;
    uint is_combo:1;
};

struct inspector_menu {
    int body_id;
    struct int_2 selected_cell_coord;
    int selected_variable;
    float min;
    float max;
    float low;
    float high;
    uint show_cell_icons:1;
    uint dragging:1;
    uint graph_open:1;
    float graph_values[1200];
    int n_graph_values;
    int next_graph_value;
    float graph_height;
    float graph_toggle_r;
    float graph_toggle_r_dot;
    float scale;
    struct real_2 center;
    struct real_2 drag_start;
    struct tooltip_t tooltip;
};

typedef struct biome_modifier biome_modifier, *Pbiome_modifier;

typedef struct biome_core biome_core, *Pbiome_core;

typedef struct body body, *Pbody;

typedef struct bounding_box_2 bounding_box_2, *Pbounding_box_2;

typedef struct body_plan body_plan, *Pbody_plan;

typedef struct boss_part_t boss_part_t, *Pboss_part_t;

typedef union body_u_316 body_u_316, *Pbody_u_316;

typedef struct brain_t brain_t, *Pbrain_t;

typedef union body_u_704 body_u_704, *Pbody_u_704;

typedef struct plan_cell plan_cell, *Pplan_cell;

typedef struct body_u_316_s_0 body_u_316_s_0, *Pbody_u_316_s_0;

typedef struct mutation_item_list mutation_item_list, *Pmutation_item_list;

typedef struct body_u_704_s_1 body_u_704_s_1, *Pbody_u_704_s_1;

typedef union plan_cell_u_32 plan_cell_u_32, *Pplan_cell_u_32;

typedef struct mutation_item mutation_item, *Pmutation_item;

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

struct body_u_316_s_0 {
    uint portal_index:8;
    uint in_portal:1;
};

union body_u_316 {
    struct body_u_316_s_0 _s_0;
    uint portal_info;
};

struct body_u_704_s_1 {
    struct mutation_item *mutations;
    int n_mutations;
    int max_mutations;
};

struct mutation_item_list {
    struct mutation_item *items;
    int n_items;
    int max_items;
};

union body_u_704 {
    struct mutation_item_list mutation_items;
    struct body_u_704_s_1 _s_1;
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

struct mutation_item {
    int mutation_index;
    int imbues[4];
    struct real_2 pos;
    float r;
    float r_dot;
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

typedef struct circular_buffer_t circular_buffer_t, *Pcircular_buffer_t;

struct circular_buffer_t {
    uchar *buffer;
    ulong64 size;
};

typedef enum SANDBOX_TOOL {
    STOOL_PAUSE=0,
    STOOL_MOVE=1,
    STOOL_POSSESS=2,
    STOOL_TEAM=3,
    STOOL_RESPAWN=4,
    STOOL_SPAWN=5,
    STOOL_DELETE=6,
    STOOL_EXPLODE=7,
    STOOL_MUTATE=8,
    STOOL_COMBO=9,
    N_SANDBOX_TOOLS=10
} SANDBOX_TOOL;

typedef struct static_cell static_cell, *Pstatic_cell;

struct static_cell {
    struct real_2 x;
    uint alive;
    struct real_3 color;
    int neighbors[6];
    uint open_sides;
};

typedef struct explosion_t explosion_t, *Pexplosion_t;

typedef union explosion_t_u_32 explosion_t_u_32, *Pexplosion_t_u_32;

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

typedef struct map_t map_t, *Pmap_t;

typedef struct room_t room_t, *Proom_t;

typedef struct creature_spawner creature_spawner, *Pcreature_spawner;

typedef struct tunnel_tile tunnel_tile, *Ptunnel_tile;

typedef struct line_render_info line_render_info, *Pline_render_info;

typedef struct biome_entrance biome_entrance, *Pbiome_entrance;

typedef struct spawn_creature_params spawn_creature_params, *Pspawn_creature_params;

struct line_render_info {
    struct real_3 x;
    struct real_2 d;
    float r;
    struct real_4 color;
};

struct room_t {
    uint cleared:1;
    int first_spawner;
    int n_spawners;
};

struct tunnel_tile {
    struct int_2 pos;
    int index;
    float value;
};

struct creature_spawner {
    int body_id;
    int creature_index;
    struct real_2 spawn_location;
    int xp;
};

struct spawn_creature_params {
    int body_id;
    struct real_2 orientation;
    uint spawn_cells:1;
    uint plant:1;
    uint dont_load_plan:1;
};

struct biome_entrance {
    int core_a;
    int core_b;
    int n_entrances;
    uint boss_id;
    int boss_xp;
    struct spawn_creature_params boss_params;
    int achievement_index;
    uint not_boss:1;
    uint direct:1;
    uint optional:1;
    uint room_exit:1;
};

struct map_t {
    uint seed;
    struct bounding_box_2 map_range;
    struct biome_core *cores;
    int n_cores;
    float *wall_values;
    float *visual_wall_values;
    struct real_2 *flow;
    struct real_3 *color;
    int *biomes;
    int *biome_cores;
    float *light;
    float *bumpyness;
    float *temperature;
    int *room_ids;
    uint *flags;
    uint *blocked_spawns;
    struct room_t *rooms;
    int n_rooms;
    struct creature_spawner *spawners;
    int max_spawners;
    int n_spawners;
    struct doorway *doors;
    int n_doors;
    struct static_cell *static_cells;
    int n_static_cells;
    struct tunnel_tile *tunnel_tiles;
    int n_tunnel_tiles;
    struct line_render_info *safe_zone_lines;
    int n_safe_zone_lines;
    float *explored;
    int map_type;
    bool no_creatures;
    struct biome_node *biome_nodes;
    int n_biome_nodes;
    struct biome_edge *biome_edges;
    int n_biome_edges;
    struct biome_entrance *biome_entrances;
    int n_biome_entrances;
};

typedef struct bitmap_t bitmap_t, *Pbitmap_t;

struct bitmap_t {
    struct uint8_4 *data;
    struct int_2 size;
    uint texture;
};

typedef struct id_t_index id_t_index, *Pid_t_index;

typedef union id_t id_t, *Pid_t;

typedef struct id_t_s_0 id_t_s_0, *Pid_t_s_0;

struct id_t_s_0 {
    ulong64 lo;
    ulong64 hi;
};

union id_t {
    struct id_t_s_0 _s_0;
    char string[16];
};

struct id_t_index {
    union id_t id;
    int index;
};

typedef struct biome_type biome_type, *Pbiome_type;

typedef struct cell_pool cell_pool, *Pcell_pool;

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

typedef struct raycast_result raycast_result, *Praycast_result;

struct raycast_result {
    struct wall_t wall;
    float length;
};

typedef enum PARTICLE_TYPE {
    PARTICLE_JET=0,
    PARTICLE_VACUUM=1,
    PARTICLE_ACID=2,
    PARTICLE_INK=3,
    PARTICLE_BLOOD=4,
    PARTICLE_XP=5,
    PARTICLE_LEVELUP=6,
    PARTICLE_GATE=7,
    PARTICLE_BUBBLE=8,
    PARTICLE_STREAM=9,
    PARTICLE_GLOW=10,
    PARTICLE_MENU=11,
    PARTICLE_SPARKLE=12,
    N_PARTICLE_TYPES=13
} PARTICLE_TYPE;

typedef enum boss_part_type {
    BP_NONE=0,
    BP_HEART=1,
    BP_TOOTH=2,
    N_BP_TYPES=3
} boss_part_type;

typedef struct sound_params sound_params, *Psound_params;

struct sound_params {
    float volume;
    float delay;
    float pitch_shift;
    float lowpass_dist;
    int type;
};

typedef struct stashed_body_plan stashed_body_plan, *Pstashed_body_plan;

struct stashed_body_plan {
    struct body_plan plan;
    char name[512];
    struct real_2 pos;
};

typedef struct explosion_render_info explosion_render_info, *Pexplosion_render_info;

struct explosion_render_info {
    struct real_3 x;
    float r;
    float time;
    float duration;
    float distortion;
    struct real_4 color1;
    struct real_4 color2;
};

typedef struct real_3x3 real_3x3, *Preal_3x3;

typedef union real_3x3_u_0 real_3x3_u_0, *Preal_3x3_u_0;

union real_3x3_u_0 {
    struct real_3 columns[3];
    float data[9];
};

struct real_3x3 {
    union real_3x3_u_0 field0_0x0;
};

typedef struct int_3 int_3, *Pint_3;

typedef union int_3_u_0 int_3_u_0, *Pint_3_u_0;

typedef struct int_3_u_0_s_0 int_3_u_0_s_0, *Pint_3_u_0_s_0;

typedef struct int_3_u_0_s_2 int_3_u_0_s_2, *Pint_3_u_0_s_2;

struct int_3_u_0_s_0 {
    int x;
    int y;
    int z;
};

struct int_3_u_0_s_2 {
    int __x0;
    struct int_2 yz;
};

union int_3_u_0 {
    struct int_3_u_0_s_0 _s_0;
    struct int_2 xy;
    struct int_3_u_0_s_2 _s_2;
    int data[3];
};

struct int_3 {
    union int_3_u_0 field0_0x0;
};

typedef struct exp_data exp_data, *Pexp_data;

struct exp_data {
    double invln2N;
    double shift;
    double negln2hiN;
    double negln2loN;
    double poly[4];
    double exp2_shift;
    double exp2_poly[5];
    ulong64 tab[512];
};

typedef struct creature_t creature_t, *Pcreature_t;

struct creature_t {
    uint id;
    uint ___id_null_termination;
    char *filename;
    struct mutation_item mutations[32];
    int n_mutations;
    float cost_discount;
    uint show_damage_numbers:1;
    uint hidden:1;
    uint snap:1;
    struct body_plan plan;
    void (*ai_func)(struct body *);
    void (*spawn_func)(struct body *, struct real_2);
    void (*death_func)(struct body *);
    bool (*generation_func)(struct body *, struct real_2);
    char lua_func[128];
    char lua_spawn_func[128];
    char lua_death_func[128];
};

typedef struct lua_State lua_State, *Plua_State;

struct lua_State {
};

typedef struct lightning_render_info lightning_render_info, *Plightning_render_info;

struct lightning_render_info {
    struct real_3 x;
    struct real_2 r;
    struct real_4 color;
};

typedef bool (*generation_fn)(struct body *, struct real_2);

typedef struct lane_context_t lane_context_t, *Plane_context_t;

typedef struct lane_group_t lane_group_t, *Plane_group_t;

typedef struct _RTL_BARRIER _RTL_BARRIER, *P_RTL_BARRIER;

struct lane_context_t {
    int lane_index;
    struct lane_group_t *group;
};

typedef struct icon_render_info icon_render_info, *Picon_render_info;

struct icon_render_info {
    struct real_3 x;
    float r;
    struct real_4 color;
    struct real_2 uv;
};

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _ULARGE_INTEGER_s_0 _ULARGE_INTEGER_s_0, *P_ULARGE_INTEGER_s_0;

struct _ULARGE_INTEGER_s_0 {
    ulong LowPart;
    ulong HighPart;
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

union world_u_14944 {
    struct cell *cells;
    struct expandable_buffer cells_memory;
};

typedef union world_u_15392 world_u_15392, *Pworld_u_15392;

union world_u_15392 {
    struct lightning_t *lightnings;
    struct expandable_buffer lightnings_memory;
};

typedef union world_u_15424 world_u_15424, *Pworld_u_15424;

union world_u_15424 {
    struct laser_t *lasers;
    struct expandable_buffer lasers_memory;
};

typedef union world_u_15456 world_u_15456, *Pworld_u_15456;

union world_u_15456 {
    struct explosion_t *explosions;
    struct expandable_buffer explosions_memory;
};

typedef union world_u_15488 world_u_15488, *Pworld_u_15488;

union world_u_15488 {
    struct explosion_render_info *explosion_visuals;
    struct expandable_buffer explosion_visuals_memory;
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

union world_u_15680 {
    struct magnetic_field_t *magnetic_fields;
    struct expandable_buffer magnetic_fields_memory;
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

union world_u_15872 {
    struct biome_type *biome_types;
    struct expandable_buffer biome_types_memory;
};

typedef union world_u_15904 world_u_15904, *Pworld_u_15904;

union world_u_15904 {
    struct biome_modifier *biome_modifiers;
    struct expandable_buffer biome_modifiers_memory;
};

typedef struct settings_t settings_t, *Psettings_t;

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

struct settings_t {
    uint settings_version;
    float effects_volume;
    float music_volume;
    union settings_t_u_12 field3_0xc;
    uint toggle_seek;
    uint toggle_ability;
    uint show_fps;
    uint fullscreen;
    uint clip_cursor;
    uint hardware_cursor;
    float gamepad_cursor_sens;
    float gamepad_deadzone;
    int window_x;
    int window_y;
    int resolution_x;
    int resolution_y;
    uint replay_recorder;
    int gif_resolution_x;
    int gif_resolution_y;
    int gif_frames;
    uint cap_framerate;
    uint framerate_cap;
    uint thread_count;
    float screenshake;
    float brightness;
    float contrast;
    uint background_effects;
    uint reflections;
    uint distortions;
    uint limit_particles;
    uint max_particles;
    uint pause_on_unfocus;
    uint show_tutorial;
    uint show_disconnected_warning;
    uint error_sound;
    uint always_show_storage;
    uint pushable_cell_buttons;
    uint copy_plan_on_possess;
    uint show_cell_icons;
    uint enable_console;
    uint win_unlocks;
};

typedef void (*body_fn)(struct body *);

typedef void (*spawn_fn)(struct body *, struct real_2);

typedef struct lightning_emitter lightning_emitter, *Plightning_emitter;

struct lightning_emitter {
    struct real_2 x;
    struct real_2 dir;
};

typedef ulong64 rsize_t;

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

struct cell_item {
    int material_index;
    struct draggable_button button;
    uint filtered:1;
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

typedef enum sound_type {
    ST_GAME=0,
    ST_MUSIC=1,
    ST_KILL_ALL=2
} sound_type;

typedef struct laser_render_info laser_render_info, *Plaser_render_info;

struct laser_render_info {
    struct real_3 x;
    struct real_2 d;
    float r;
    struct real_4 color;
};

typedef struct context_t context_t, *Pcontext_t;

typedef union context_t_u_0 context_t_u_0, *Pcontext_t_u_0;

typedef struct memory_manager memory_manager, *Pmemory_manager;

typedef struct print_buffer_t print_buffer_t, *Pprint_buffer_t;

typedef struct trace_t trace_t, *Ptrace_t;

typedef struct trace_node trace_node, *Ptrace_node;

typedef struct profiler_frame profiler_frame, *Pprofiler_frame;

typedef struct context_t_u_0_s_0 context_t_u_0_s_0, *Pcontext_t_u_0_s_0;

typedef struct stack_allocation stack_allocation, *Pstack_allocation;

struct trace_t {
    struct trace_node *trace_nodes;
    int n_trace_nodes;
    int type;
    int frame_number;
};

struct context_t_u_0_s_0 {
    int lane_index;
    struct lane_group_t *group;
};

union context_t_u_0 {
    struct context_t_u_0_s_0 _s_0;
    struct lane_context_t current_lane_context;
};

struct print_buffer_t {
    char *base;
    char *end;
    char *buffer;
};

struct context_t {
    union context_t_u_0 field0_0x0;
    struct lane_context_t lane_stack[4];
    int n_lane_stack;
    int barrier_number;
    int thread_id;
    struct memory_manager *manager;
    uint seed;
    uint visual_seed;
    struct lua_State *L;
    struct print_buffer_t log_buffer;
    struct print_buffer_t game_buffer;
    struct trace_t *current_trace;
    struct trace_t *latest_trace;
    struct trace_node *current_trace_node;
    struct profiler_frame *profiler_frames;
    int current_profiler_frame;
    struct circle_render_info *circles;
    int n_circles;
};

struct stack_allocation {
    void *data;
};

struct memory_manager {
    struct expandable_buffer stack;
    ulong64 stack_used;
    ulong64 checkpoint;
    struct stack_allocation stallocs[4096];
    int n_stallocs;
};

struct profiler_frame {
    struct trace_t traces[3];
    int n_traces;
};

struct trace_node {
    struct trace_node *parent;
    struct trace_node *previous;
    struct trace_node *next;
    struct trace_node *first_child;
    struct trace_node *last_child;
    bool traversed_children;
    bool traversed;
    char *name;
    double start_time;
    double end_time;
};

typedef struct game_sounds_t game_sounds_t, *Pgame_sounds_t;

typedef struct sound_t sound_t, *Psound_t;

typedef struct looping_sound looping_sound, *Plooping_sound;

typedef union looping_sound_u_32 looping_sound_u_32, *Plooping_sound_u_32;

union looping_sound_u_32 {
    float next_target_volume;
    long next_target_volume_data;
};

struct sound_t {
    short *data;
    int n_channels;
    int n_samples;
};

struct game_sounds_t {
    struct sound_t squish;
    struct sound_t explosion;
    struct sound_t collision;
    struct sound_t bubble;
    struct sound_t lightning;
    struct sound_t thunder;
    struct sound_t grow;
    struct sound_t death;
    struct sound_t death_music;
    struct sound_t run_start;
    struct sound_t run_complete;
    struct sound_t run_complete_music;
    struct sound_t squee;
    struct sound_t sizzle;
    struct sound_t shatter;
    struct sound_t levelup;
    struct sound_t xp_tick;
    struct sound_t menu_tick;
    struct sound_t menu_click;
    struct sound_t acid_spray;
    struct sound_t ink_spray;
    struct sound_t vacuum;
    struct sound_t spike;
    struct sound_t error;
    struct looping_sound *shocked_loop;
    struct looping_sound *laser_loop;
    struct looping_sound *portal_loop;
    struct looping_sound *music_loop;
};

struct looping_sound {
    int type;
    struct sound_t sound;
    float volume;
    float target_volume;
    union looping_sound_u_32 field4_0x20;
    float lerp_rate;
    double pos;
    int loop_overlap;
    int *start_points;
    int n_start_points;
    bool ready;
};

typedef struct bone bone, *Pbone;

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

typedef struct queued_sound queued_sound, *Pqueued_sound;

struct queued_sound {
    struct sound_t *sound;
    struct sound_params params;
    float filtered[2];
    int n_played_samples;
    bool kill;
};

typedef struct int_2x2 int_2x2, *Pint_2x2;

typedef union int_2x2_u_0 int_2x2_u_0, *Pint_2x2_u_0;

union int_2x2_u_0 {
    struct int_2 columns[2];
    int data[4];
};

struct int_2x2 {
    union int_2x2_u_0 field0_0x0;
};

typedef struct cell_render_info cell_render_info, *Pcell_render_info;

struct cell_render_info {
    struct real_3 x;
    struct real_2 body_x;
    struct real_2 r;
    float r_scale;
    struct real_4 color;
    float w_mult;
    float spark;
    int texture_type;
    struct real_2 uv;
    uint open_sides;
};

typedef struct init_world_params init_world_params, *Pinit_world_params;

struct init_world_params {
    bool keep_seed;
    int map_type;
    bool no_creatures;
    bool loading;
};

typedef struct bone_id_table bone_id_table, *Pbone_id_table;

typedef union bone_id_table_u_0 bone_id_table_u_0, *Pbone_id_table_u_0;

typedef union bone_id_table_u_32 bone_id_table_u_32, *Pbone_id_table_u_32;

union bone_id_table_u_0 {
    struct id_index *index_table;
    struct expandable_buffer index_table_memory;
};

union bone_id_table_u_32 {
    struct bone *elements;
    struct expandable_buffer elements_memory;
};

struct bone_id_table {
    union bone_id_table_u_0 field0_0x0;
    int n_max_elements;
    int next_id;
    union bone_id_table_u_32 field3_0x20;
    int n_elements;
};

typedef struct slider_params slider_params, *Pslider_params;

struct slider_params {
    float full_width;
    struct real_2 pos;
    bool active;
};

typedef enum actions {
    ACT_IDLE=0,
    ACT_CHASE=1,
    ACT_SEARCH=2,
    ACT_ATTACK=3,
    ACT_RUN=4,
    ACT_GOTO=5,
    N_ACTIONS=6
} actions;

typedef struct healthbar_t healthbar_t, *Phealthbar_t;

struct healthbar_t {
    float health;
    float cost;
    float min_cost;
    float recent_damage;
    float recent_healing;
    float shock;
    float poison;
    float burn;
    float damage_timer;
    float can_rebirth;
};

typedef struct bone_contact bone_contact, *Pbone_contact;

struct bone_contact {
    struct cell *c;
    struct cell *o;
    struct real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
};

typedef struct edit_menu edit_menu, *Pedit_menu;

typedef union edit_menu_u_64 edit_menu_u_64, *Pedit_menu_u_64;

typedef struct slider_t slider_t, *Pslider_t;

typedef struct undo_state undo_state, *Pundo_state;

typedef union edit_menu_u_8456 edit_menu_u_8456, *Pedit_menu_u_8456;

typedef union edit_menu_u_8488 edit_menu_u_8488, *Pedit_menu_u_8488;

typedef union edit_menu_u_8520 edit_menu_u_8520, *Pedit_menu_u_8520;

typedef union edit_menu_u_8552 edit_menu_u_8552, *Pedit_menu_u_8552;

typedef struct textbox textbox, *Ptextbox;

typedef struct static_button static_button, *Pstatic_button;

typedef struct workshop_body_plan workshop_body_plan, *Pworkshop_body_plan;

struct textbox {
    char *text;
    int max_text;
    int n_text;
    int cursor;
    int selection_start;
    int selection_end;
    int active;
};

union edit_menu_u_8552 {
    struct static_button *panel_buttons;
    struct expandable_buffer panel_buttons_memory;
};

struct undo_state {
    struct body_plan plan;
    struct int_2 last_drawn_point;
    int mode;
};

union edit_menu_u_8488 {
    struct saved_body_plan *saved;
    struct expandable_buffer saved_memory;
};

union edit_menu_u_8520 {
    struct workshop_body_plan *workshop;
    struct expandable_buffer workshop_memory;
};

struct slider_t {
    float t;
    float width;
    float radius;
    float radius_dot;
    bool dragging;
    bool was_hovered;
    bool active;
};

struct static_button {
    float r;
    float r_dot;
    float state;
    float tooltip_alpha;
    bool was_hovered;
};

union edit_menu_u_8456 {
    struct stashed_body_plan *stashed;
    struct expandable_buffer stashed_memory;
};

union edit_menu_u_64 {
    struct cell_item *cell_items;
    struct expandable_buffer cell_items_memory;
};

struct edit_menu {
    struct real_2 *selection_points;
    int n_selection_points;
    float time;
    struct int_2 last_drawn_point;
    float theta;
    float scale;
    float radius;
    struct real_2 body_center_pos;
    int mode;
    float mode_trans;
    int tool;
    int selected_cell_item;
    union edit_menu_u_64 field12_0x40;
    int max_cell_items;
    int n_cell_items;
    int cell_item_counts[2048];
    struct real_2 symmetry_visual_x;
    struct real_2 symmetry_visual_x_dot;
    float symmetry_mode_trans;
    int symmetry_mode;
    bool drawing;
    bool modified;
    bool want_show_unlock_window;
    struct slider_t size_slider;
    struct body_plan plan;
    struct plan_cell *dragged_cells;
    uchar *dragged_open_sides;
    int n_dragged_cells;
    int max_dragged_cells;
    struct plan_cell *clipboard_cells;
    int n_clipboard_cells;
    int max_clipboard_cells;
    struct undo_state *undo_stack;
    int n_undo_states;
    int undo_stack_pointer;
    int max_undo_states;
    union edit_menu_u_8456 field36_0x2108;
    int n_stashed;
    int max_stashed;
    union edit_menu_u_8488 field39_0x2128;
    int n_saved;
    int max_saved;
    union edit_menu_u_8520 field42_0x2148;
    int n_workshop;
    int max_workshop;
    union edit_menu_u_8552 field45_0x2168;
    int max_panel_buttons;
    struct textbox rename_box;
    struct real_2 rename_box_alignment;
    int rename_index;
    struct real_2 rename_box_pos;
    struct textbox savebox;
    bool savebox_active;
    struct textbox searchbox;
    bool searchbox_active;
    struct static_button search_button;
    struct static_button search_cancel_button;
    float max_cost;
    float max_genome_size;
    struct draggable_button *color_buttons;
    struct real_4 *colors;
    int n_colors;
    int dragged_button;
    struct real_2 drag_start;
    float drag_dist;
    struct static_button tool_buttons[3];
    struct static_button panel_tool_buttons[4];
    struct static_button mode_button;
    struct static_button symmetry_mode_buttons[3];
    struct static_button icon_button;
    struct static_button left_button;
    struct static_button right_button;
    struct static_button close_button;
    uchar *dists;
    struct bounding_box_2 visible_region;
    int n_warnings[3];
    int warning_index[3];
    struct real_2 warning_box_size[3];
    char *stash_dir;
    struct tooltip_t tooltip;
};

struct workshop_body_plan {
    ulong64 workshop_id;
    char name[512];
    char path[512];
    struct real_2 pos;
};

typedef struct _Mbstatet _Mbstatet, *P_Mbstatet;

typedef struct _Mbstatet mbstate_t;

typedef struct ring_render_info ring_render_info, *Pring_render_info;

struct ring_render_info {
    struct real_3 x;
    float ri;
    float ro;
    struct real_4 color;
};

typedef struct sandbox_menu sandbox_menu, *Psandbox_menu;

struct sandbox_menu {
    int tool;
    struct static_button tool_buttons[10];
    float selected_team;
    struct static_button team_buttons[5];
    float *mutation_r;
    float *mutation_r_dot;
    struct slider_t explosion_slider;
    float explosion_radius;
    float *cell_r;
    float *cell_r_dot;
    struct real_2 block_zone;
    int selected_creature;
    int dragged_body;
    struct tooltip_t tooltip;
};

typedef struct bounding_box_3 bounding_box_3, *Pbounding_box_3;

struct bounding_box_3 {
    struct int_3 l;
    struct int_3 u;
};

typedef struct brown_sound brown_sound, *Pbrown_sound;

typedef union brown_sound_u_16 brown_sound_u_16, *Pbrown_sound_u_16;

typedef union brown_sound_u_28 brown_sound_u_28, *Pbrown_sound_u_28;

union brown_sound_u_28 {
    float next_lowpass;
    long next_lowpass_data;
};

union brown_sound_u_16 {
    float next_target_volume;
    long next_target_volume_data;
};

struct brown_sound {
    float value;
    float filtered_value;
    float volume;
    float target_volume;
    union brown_sound_u_16 field4_0x10;
    float lowpass;
    float target_lowpass;
    union brown_sound_u_28 field7_0x1c;
    float lerp_rate;
};

typedef struct map_floodfill_piece map_floodfill_piece, *Pmap_floodfill_piece;

struct map_floodfill_piece {
    int id;
    int n_hexes;
    struct bounding_box_2 bounds;
};

typedef enum MAP_TYPE {
    MAP_NORMAL=0,
    MAP_CIRCLE=1,
    MAP_EMPTY=2,
    MAP_BEACH=3,
    N_MAP_TYPES=4
} MAP_TYPE;

typedef struct body_id_table body_id_table, *Pbody_id_table;

typedef union body_id_table_u_0 body_id_table_u_0, *Pbody_id_table_u_0;

typedef union body_id_table_u_32 body_id_table_u_32, *Pbody_id_table_u_32;

union body_id_table_u_0 {
    struct id_index *index_table;
    struct expandable_buffer index_table_memory;
};

union body_id_table_u_32 {
    struct body *elements;
    struct expandable_buffer elements_memory;
};

struct body_id_table {
    union body_id_table_u_0 field0_0x0;
    int n_max_elements;
    int next_id;
    union body_id_table_u_32 field3_0x20;
    int n_elements;
};

typedef struct arc_render_info arc_render_info, *Parc_render_info;

struct arc_render_info {
    struct real_3 x;
    struct real_2 d0;
    struct real_2 d1;
    float R;
    float r;
    struct real_4 color;
};

typedef struct light_render_info light_render_info, *Plight_render_info;

struct light_render_info {
    struct real_3 x;
    float r;
    struct real_4 color;
};

typedef struct mutation_type mutation_type, *Pmutation_type;

struct mutation_type {
    union id_t id;
    float weight;
    float cum_weight;
    struct real_2 uv;
    int extra_data_offset;
    int n_imbues;
    uint no_stacking:1;
};

typedef struct biome_weights biome_weights, *Pbiome_weights;

struct biome_weights {
    struct int_3 biomes;
    struct real_3 weights;
};

typedef void (*cell_fn)(struct cell *);

typedef struct real_4x4 real_4x4, *Preal_4x4;

typedef union real_4x4_u_0 real_4x4_u_0, *Preal_4x4_u_0;

union real_4x4_u_0 {
    struct real_4 columns[4];
    float data[16];
};

struct real_4x4 {
    union real_4x4_u_0 field0_0x0;
};

typedef struct gamepad_t gamepad_t, *Pgamepad_t;

struct gamepad_t {
    uint gamepads_connected;
    short buttons;
    float left_trigger;
    float right_trigger;
    struct real_2 left_stick;
    struct real_2 right_stick;
};

typedef struct mat_and_color mat_and_color, *Pmat_and_color;

struct mat_and_color {
    int material_index;
    struct real_4 color;
};

typedef struct exp2f_data exp2f_data, *Pexp2f_data;

struct exp2f_data {
    ulong64 tab[32];
    double shift_scaled;
    double poly[3];
    double shift;
    double invln2_scaled;
    double poly_scaled[3];
};

typedef struct real_2x2 real_2x2, *Preal_2x2;

typedef union real_2x2_u_0 real_2x2_u_0, *Preal_2x2_u_0;

union real_2x2_u_0 {
    struct real_2 columns[2];
    float data[4];
};

struct real_2x2 {
    union real_2x2_u_0 field0_0x0;
};

typedef struct boss_gate boss_gate, *Pboss_gate;

struct boss_gate {
    struct int_2 pos;
    int boss_id;
    int first_cell;
    int n_cells;
    int achievement_index;
};

typedef struct material_t material_t, *Pmaterial_t;

typedef union material_t_u_76 material_t_u_76, *Pmaterial_t_u_76;

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

union material_t_u_76 {
    struct material_t_u_76_s_0 _s_0;
    uint flags;
};

struct material_t {
    uint id;
    char *name;
    int next_variant;
    uint tags;
    uint tier;
    float drop_weight;
    int spawn_with[4];
    float base_cost;
    float random_cost;
    float genome_size;
    float growth_rate;
    float max_health;
    float transfer_rate;
    float regen;
    union material_t_u_76 field14_0x4c;
    float density;
    float sharpness;
    float leeching;
    float hardness;
    float max_radial_force;
    float max_angular_force;
    float radial_compliance;
    float angular_compliance;
    float plasticity;
    float friction;
    float restitution;
    float drag;
    float tangent_drag;
    float movement_force;
    float conductivity;
    float leak_conductivity;
    float capacitance;
    float inv_capacitance;
    float directional_conductivity;
    float heat_conductivity;
    float leak_heat_conductivity;
    float heat_capacity;
    float inv_heat_capacity;
    struct real_4 base_color;
    float light_radius;
    float light_intensity;
    struct real_3 emission;
    int texture_type;
    struct real_2 uv;
    int combine_material_index1;
    int combine_material_index2;
    void (*physics_update_fn)(struct cell *);
    void (*force_update_fn)(struct cell *);
    void (*electric_update_fn)(struct cell *);
    void (*connection_update_fn)(struct cell *);
    void (*brain_fn)(struct cell *);
    void (*destroyed_fn)(struct cell *);
};

typedef struct portal_t portal_t, *Pportal_t;

struct portal_t {
    struct real_2 x;
    struct real_2 x_dot;
};

typedef struct audio_context audio_context, *Paudio_context;

typedef struct IMMDevice IMMDevice, *PIMMDevice;

typedef struct IAudioClient IAudioClient, *PIAudioClient;

typedef struct IAudioRenderClient IAudioRenderClient, *PIAudioRenderClient;

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

typedef union audio_context_u_1752 audio_context_u_1752, *Paudio_context_u_1752;

struct IAudioRenderClient {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

struct IMMDevice {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

struct IAudioClient {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

union audio_context_u_1752 {
    float next_target_music_transition_speed;
    long next_target_music_transition_speed_data;
};

struct audio_context {
    bool initialized;
    struct IMMDevice *device;
    struct IAudioClient *audio_client;
    struct IAudioRenderClient *render_client;
    struct tWAVEFORMATEX *wfx;
    uint buffer_frame_count;
    uint n_frames_available;
    uint n_frames_padding;
    uint internal_sample_rate;
    int output_samples_per_internal_sample;
    float *game_sfx_buffer;
    int game_sfx_pos;
    int game_sfx_size;
    float *music_buffer;
    int music_pos;
    int music_size;
    float game_sfx_volume;
    float target_game_sfx_volume;
    float music_volume;
    float target_music_volume;
    struct queued_sound *queued_sounds;
    int max_queued_sounds;
    ulong next_queued_sound;
    ulong last_queued_sound;
    struct queued_sound *playing_sounds;
    int n_playing_sounds;
    int max_playing_sounds;
    struct looping_sound *looping_sounds;
    int n_looping_sounds;
    int max_looping_sounds;
    struct brown_sound brown_noise;
    struct singing_channel singing[96];
    int current_song;
    float music_transition_speed;
    float target_music_transition_speed;
    union audio_context_u_1752 field35_0x6d8;
};

typedef struct player_command_t player_command_t, *Pplayer_command_t;

struct player_command_t {
    struct real_2 movement;
    struct real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[1];
};

typedef struct render_context render_context, *Prender_context;

typedef union render_context_u_200 render_context_u_200, *Prender_context_u_200;

typedef union render_context_u_296 render_context_u_296, *Prender_context_u_296;

typedef struct render_context_u_200_s_0 render_context_u_200_s_0, *Prender_context_u_200_s_0;

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

union render_context_u_296 {
    struct render_context_u_296_s_0 _s_0;
    struct font_info font_infos[4];
};

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

union render_context_u_200 {
    struct render_context_u_200_s_0 _s_0;
    uint textures[9];
};

struct render_context {
    float fov;
    struct real_3 camera_pos;
    struct real_3 old_camera_pos;
    struct real_3x3 camera_axes;
    struct real_4x4 camera;
    struct real_4 background_color;
    struct real_4 foreground_color;
    struct real_4 highlight_color;
    uint frame_buffer;
    uint cell_frame_buffer;
    uint lighting_frame_buffer;
    uint post_process_frame_buffer;
    uint background_frame_buffer;
    uint thumbnail_frame_buffer;
    union render_context_u_200 field14_0xc8;
    int current_background_texture;
    uint thumbnail_texture;
    uint wall_texture;
    uint biome_texture;
    uint map_flow_texture;
    uint map_color_texture;
    uint map_wall_color1_texture;
    uint map_wall_color2_texture;
    uint map_wall_params_texture;
    uint map_lighting_texture;
    uint map_bumpyness_texture;
    uint map_temperature_texture;
    uint map_explored_texture;
    struct int_2 resolution;
    union render_context_u_296 field29_0x128;
    float time;
};

typedef enum MAP_FLAGS {
    MAP_FLAG_SAFE=1
} MAP_FLAGS;

typedef struct button_out button_out, *Pbutton_out;

struct button_out {
    bool clicked;
    bool hovered;
};

typedef struct box_real_2 box_real_2, *Pbox_real_2;

struct box_real_2 {
    struct real_2 l;
    struct real_2 u;
};

typedef struct run_stats run_stats, *Prun_stats;

struct run_stats {
    double start_time;
    double end_time;
    uint frames;
    uint seed;
    int biomes_explored;
    int xp;
    int level;
    uint ending;
    int creature_deaths;
    uint death_biome;
};

typedef struct text_element text_element, *Ptext_element;

typedef union text_element_u_1 text_element_u_1, *Ptext_element_u_1;

union text_element_u_1 {
    char c;
    uchar modifiers;
};

struct text_element {
    uchar type;
    union text_element_u_1 field1_0x1;
};

typedef struct text_info text_info, *Ptext_info;

typedef struct text_params text_params, *Ptext_params;

struct text_params {
    float scale;
    struct real_2 orientation;
    float shadow;
    float outline;
    struct real_4 shadow_color;
    struct real_4 outline_color;
    struct real_2 clip_size;
    float wrap_width;
    float wrap_indent;
};

struct text_info {
    char *text;
    struct real_2 x;
    struct real_4 color;
    struct real_2 alignment;
    struct font_info font;
    struct text_params params;
    struct real_4 background_color;
    float background_radius;
};

typedef enum TEXT_INPUT {
    TEXT_NONE=0,
    TEXT_CHAR=1,
    TEXT_ENTER=2,
    TEXT_BACKSPACE=3,
    TEXT_DELETE=4,
    TEXT_CUT=5,
    TEXT_COPY=6,
    TEXT_PASTE=7,
    TEXT_ALL=8,
    TEXT_LEFT=9,
    TEXT_RIGHT=10,
    TEXT_UP=11,
    TEXT_DOWN=12,
    TEXT_HOME=13,
    TEXT_END=14,
    TEXT_ESCAPE=15
} TEXT_INPUT;

typedef struct texture_t texture_t, *Ptexture_t;

struct texture_t {
    uint handle;
    struct int_2 size;
};

typedef struct tool_render_info tool_render_info, *Ptool_render_info;

struct tool_render_info {
    struct real_3 x;
    float r;
    struct real_4 color;
    uint id;
    float state;
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    int pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef longlong long64;

typedef long64 time_t;

typedef struct translation_list translation_list, *Ptranslation_list;

struct translation_list {
    char **text;
    char *formatted;
    ulong64 max_formatted;
};

typedef struct translation_info translation_info, *Ptranslation_info;

struct translation_info {
    int mutagen_material_index;
    int combine_material_index;
};

typedef struct translation_map translation_map, *Ptranslation_map;

struct translation_map {
    char **keys;
    struct translation_list *values;
    uint max_entries;
};

typedef struct translation_map_kash_t translation_map_kash_t, *Ptranslation_map_kash_t;

struct translation_map_kash_t {
    char *key;
    uint hash;
};

typedef uchar uint8_t;

typedef struct uint_4 uint_4, *Puint_4;

struct uint_4 {
    union uint_4_u_0 field0_0x0;
};

typedef struct user_input user_input, *Puser_input;

struct user_input {
    struct real_2 mouse;
    struct real_2 dmouse;
    struct real_2 cursor_x;
    float mouse_wheel;
    float mouse_hwheel;
    uchar buttons[32];
    uchar pressed_buttons[32];
    uchar released_buttons[32];
    bool click_blocked;
    bool right_click_blocked;
    bool escape_blocked;
    bool hover_blocked;
    bool buttons_blocked;
    void *active_ui_element;
    int hovered_ui_element;
    int old_hovered_ui_element;
    int cursor_type;
    struct text_element text_stream[256];
    int n_text_stream;
    uint text_modifiers;
    struct gamepad_t gamepad;
    short gamepad_prev_buttons;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HGLRC__ HGLRC__, *PHGLRC__;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _LARGE_INTEGER_s_0 _LARGE_INTEGER_s_0, *P_LARGE_INTEGER_s_0;

typedef ushort wint_t;

typedef struct world world, *Pworld;

typedef struct command_result_t command_result_t, *Pcommand_result_t;

typedef struct workshop_published_item workshop_published_item, *Pworkshop_published_item;

struct command_result_t {
    char *command;
    char *result;
    char *error;
};

struct workshop_published_item {
    ulong64 id;
    char name[129];
};

struct world {
    int menu;
    uint confirm_newgame:1;
    uint confirm_quit:1;
    uint dead:1;
    uint won:1;
    uint show_body_preview:1;
    uint show_trace:1;
    uint frozen:1;
    uint map_mode:1;
    uint use_battle_music:1;
    uint scroll_blocked:1;
    uint lava_walls:1;
    uint use_gamepad:1;
    uint gamepad_cursor_mode:1;
    uint left_cursor_mode:1;
    uint hide_cursor:1;
    uint ability_toggled0:1;
    uint ability_toggled1:1;
    uint ability_toggled2:1;
    uint seek_toggled:2;
    uint portals_enabled:2;
    uint block_mouse:1;
    uint free_last_mutations:1;
    int game_mode;
    int debug_view_mode;
    int exploding_corpses;
    struct real_2 camera_pos;
    float normal_camera_dist;
    float map_camera_dist;
    float camera_dist;
    float vision_radius;
    struct real_2 screenshake;
    struct real_2 screenshake_dot;
    uint credits_timer;
    float threat_level;
    int current_biome_ambient;
    int current_biome_battle;
    struct edit_menu em;
    struct sandbox_menu sm;
    struct inspector_menu im;
    int selected_body;
    float last_team;
    struct mutation_item_list last_mutations;
    struct real_2 spawn_x;
    float boss_heart_movement;
    float boss_heart_rotation;
    float boss_heart_accel;
    float boss_heart_vel;
    float boss_heart_omega;
    float boss_heart_omega_2;
    float boss_heart_omega_dot;
    float boss_heart_omega_dot_2;
    struct portal_t portals[2];
    struct body_id_table bodies;
    struct bone_id_table bones;
    union world_u_14888 field55_0x3a28;
    int body_auxiliary_size;
    union world_u_14920 field57_0x3a48;
    union world_u_14944 field58_0x3a60;
    int n_cells;
    int max_cells;
    int next_cell_id;
    struct boss_gate *boss_gates;
    int n_boss_gates;
    struct lightning_emitter *lightning_emitters;
    int n_lightning_emitters;
    int max_lightning_emitters;
    int selected;
    int hovered;
    struct map_t map;
    int *hash_data;
    int *hashed_cells;
    int max_hashed_cells;
    struct real_3 *hashed_pos;
    int *grid_data;
    int *grid_bodies;
    struct real_2 *grid_pos;
    struct boss_part_t *boss_parts;
    int n_boss_parts;
    union world_u_15392 field79_0x3c20;
    int n_lightnings;
    int max_lightnings;
    union world_u_15424 field82_0x3c40;
    int n_lasers;
    int max_lasers;
    union world_u_15456 field85_0x3c60;
    int n_explosions;
    int max_explosions;
    union world_u_15488 field88_0x3c80;
    int n_explosion_visuals;
    int max_explosion_visuals;
    union world_u_15520 field91_0x3ca0;
    int n_radiant_visuals;
    int max_radiant_visuals;
    union world_u_15552 field94_0x3cc0;
    int n_stasis_visuals;
    int max_stasis_visuals;
    union world_u_15584 field97_0x3ce0;
    int n_paint_visuals;
    int max_paint_visuals;
    union world_u_15616 field100_0x3d00;
    int n_particle_pushers;
    int max_particle_pushers;
    union world_u_15648 field103_0x3d20;
    int n_link_attractors;
    int max_link_attractors;
    union world_u_15680 field106_0x3d40;
    int n_magnetic_fields;
    int max_magnetic_fields;
    struct light_reciever_t *light_recievers;
    struct cell **light_reciever_cells;
    int *light_reciever_values;
    int n_light_recievers;
    union world_u_15744 field113_0x3d80;
    int n_mutation_pickups;
    int max_mutation_pickups;
    union world_u_15776 field116_0x3da0;
    int n_cell_pickups;
    int max_cell_pickups;
    union world_u_15808 field119_0x3dc0;
    int n_particles;
    int max_particles;
    union world_u_15840 field122_0x3de0;
    int n_acid_particles;
    int max_acid_particle_groups;
    union world_u_15872 field125_0x3e00;
    int max_biome_types;
    int n_biome_types;
    union world_u_15904 field128_0x3e20;
    int max_biome_modifiers;
    int n_biome_modifiers;
    struct tooltip_t tooltip;
    struct real_2 tooltip_x;
    struct real_2 tooltip_pickup_x;
    bool tooltip_active;
    struct real_2 gamepad_cursor_x;
    uint base_seed;
    uint seed;
    uint editor_seed;
    int frame_number;
    int tutorial_stage;
    char *current_tutorial;
    int map_prompt_timer;
    struct real_2 end_text_x;
    float fade_in;
    float wall_vision;
    float start_trans;
    uint loading_screen:1;
    uint done_loading:1;
    uint starting_game:1;
    uint starting_new_run:1;
    uint starting_sandbox:1;
    uint has_save:1;
    uint has_sandbox:1;
    uint starting_mode;
    uint start_animation_done;
    struct init_world_params sandbox_start_params;
    float jet_volume;
    float acid_volume;
    float ink_volume;
    float vacuum_volume;
    float xp_volume;
    float lightning_volume;
    float thunder_volume;
    float singing_volume[96];
    struct final_boss_state final_boss;
    struct run_stats run;
    char *message_queue[16];
    int n_message_queue;
    float message_timer;
    struct print_buffer_t game_print_buffer;
    float game_print_timer;
    uint queued_seed;
    bool use_fixed_seed;
    bool is_seeded;
    struct lua_State *console_L;
    struct textbox console_box;
    struct command_result_t *console_history;
    int max_console_history;
    int n_console_history;
    int selected_command;
    bool show_console;
    char *stash_dir;
    struct translation_map translations;
    int n_languages;
    int language_index;
    int n_tips;
    struct workshop_published_item workshop_published[50];
    int n_workshop_published;
    int total_workshop_published;
    int workshop_published_page;
    struct render_context *rc;
    struct player_command_t player_commands[360];
    int player_command_start;
    int n_player_commands;
    int input_delay;
};


typedef struct floodfill_piece floodfill_piece, *Pfloodfill_piece;

struct floodfill_piece {
    int start_index;
    int n_cells;
    int n_hearts;
    int n_cancers;
    float health;
    float cost;
    struct bounding_box_3 region;
};

typedef struct serialized_data serialized_data, *Pserialized_data;

struct serialized_data {
    uchar *data;
    int size;
};

typedef struct color_bar_render_info color_bar_render_info, *Pcolor_bar_render_info;

typedef struct unnamed_type_colors unnamed_type_colors, *Punnamed_type_colors;

struct unnamed_type_colors {
    struct real_3 color0;
    struct real_3 color1;
    struct real_3 color2;
    struct real_3 color3;
    struct real_3 color4;
};

struct color_bar_render_info {
    float min;
    float low;
    float mid;
    float high;
    float max;
    struct unnamed_type_colors colors;
    uint do_square;
};

typedef struct file_info file_info, *Pfile_info;

struct file_info {
    uint is_directory:1;
};

typedef struct rectangle_render_info rectangle_render_info, *Prectangle_render_info;

struct rectangle_render_info {
    real_3 x;
    real_2 r;
    struct real_4 color;
};

typedef struct strand strand, *Pstrand;

struct strand {
    char *str;
    int len;
};

typedef struct big_lightning_vertex big_lightning_vertex, *Pbig_lightning_vertex;

struct big_lightning_vertex {
    struct real_2 x;
    struct real_4 color;
};

struct window_t {
    struct HWND__ *hwnd;
    struct HGLRC__ *hglrc;
    struct real_2 size;
    struct user_input input;
    struct user_input frame_input;
    union _LARGE_INTEGER timer_frequency;
    union _LARGE_INTEGER last_time;
    union _LARGE_INTEGER this_time;
    struct render_context rc;
    struct render_context ui;
    struct recording_buffer rb;
    bool clip_cursor;
    bool focused;
};
