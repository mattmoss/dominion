#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

// Forward declare... lots of stuff.
int mygetch();
void init_screen();
void online_info();
void read_races();
void read_world(Sworld* wp, char fname[]);
void print_nations();
void usageerr(int argc, char *argv[]);
void clean_exit();
void init();
void init_user(int innation, char nation[]);
void init_keymap();
void init_screen();
void intro(Sworld *wp, Snation *np);
void noncritical();
void main_loop();
void cleanup();
void clean_exit();
void statline(char s1[], char s2[]);
void statline2(char s1[], char s2[]);
void statline2_err(char s1[], char s2[]);
void statline_prompt(char s1[], char s2[]);
void statline2_prompt(char s1[], char s2[]);
void draw_map();
void set_cursor();
int re_center(int x, int y);
void wrap(Pt *pp);
int army_is_in_sector(Ssector *sp, int owner, int id);
int first_sect_army(Ssector *sp);
void gen_exec(char *s);
void del_lock(int id);
int is_active_ntn(Snation* np);
int get_diplo_status(Sdiplo **dm, int nation1, int nation2);
void change_dip_status(Sdiplo **dm, Sdiplo **initial_dm, int n1, int n2);
int getexec(FILE *fp, struct argument args[]);
void load_options(Snation* np);
void run_exec_line(Snation *np, struct argument args[]);
int parse_exec_line(char line[], struct argument args[]);
int insert_army_nation(Snation *np, Sarmy *ap, int chosen_id);
int insert_army_sector(Ssector *sp, Sarmy *ap);
void delete_army_nation(Snation *np, Sarmy *ap);
void delete_army_sector(Ssector *sp, Sarmy *ap);
Sarmy *get_army(Snation *np, int id);
void addsector(Snation *np, int x, int y);
int basic_move_rate(Snation *np);
int is_spirit(Sarmy *ap);
void destroy_nation(int id);
void load_army_types();
void load_spirit_types();
void load_master_execs();
int get_nation_id(char name[]);
void get_crypt_pass(char prompt[], char pass[], WINDOW *w, char def_pass[]);
void handle_locks(int id);
void get_avail_armies(Suser *up, int skill);
void get_spells(Suser *up, int skill);
void get_spirits(Suser *up, int skill);
void load_nation(int id, Snation *np);
void load_dead_hspells(Suser *up, int flag);
void load_h_spells(Suser *up);
void find_visible_sectors(int **visible_sectors);
void ask_for_mail_reader(WINDOW *win);
void save_options(Snation *np);
void touch_all_wins();
void dom_getline(char s[], int n);
int wget_string(WINDOW *w, char *rets, int len);
int wget_number(WINDOW *w, int *num);
int wget_name(WINDOW *w, char *name);
void mem_error();
int is_master_lock();
void set_lock(int id);
int check_compressed_world(char fname[]);
void read_nation(Snation *np, FILE *fp, Sworld *wp);
void write_nation(Snation *np, FILE *fp);
void init_wrap();
void critical();
void init_options(Snation *np);
int get_n_civil(Snation *np);
int get_n_soldiers(Snation *np);
int get_n_priests(Snation *np);
int get_n_students(Snation *np);
int get_generic_move_cost(Snation* np, Ssector* sp);
int get_army_move_cost(Snation* np, Ssector* sp, Sarmy *ap);
int n_workers(Ssector *sp);
int xrel(int x, int y, Pt cap);
int yrel(int x, int y, Pt cap);
int map_alt(int altitude);
int has_visible_army(Ssector *sp, Suser *up);
void draw_budget_screen(WINDOW *w, Snation * np);
void storage_budget(Snation *np);
void do_tech_budget(WINDOW *w, Snation * np);
void do_magic_budget(WINDOW *w, Snation * np);
void dump_current_screen();
int calc_revenue(Snation *np);
int calc_serv_revenue(Snation *np);
int calc_expend(Snation *np);
int calc_jewels(Snation *np);
int calc_food(Snation *np);
int calc_expend_jewels(Snation *np);
int calc_metal(Snation *np);
int calc_expend_metal(Snation *np);
int calc_expend_food(Snation *np);
int military_maint(Snation *np);
int military_maint_metal(Snation *np);
int military_maint_jewels(Snation *np);
int non_profit_maint(Snation *np);
void draw_storage_budget(WINDOW *w, Snation * np);
void start_help_win();
void show_help();
void end_help_win();
int sect_n_armies(Ssector *sp);
int sector_metal(Ssector *sp);
int sector_jewels(Ssector *sp);
int sector_food(Ssector *sp);
void name_sector(WINDOW *w);
int redesignate(Snation *np, WINDOW *w, int confirm);
void move_capital(Snation* np, Ssector *sp);
void cmoney(Snation *np, int m);
void cmetal(Snation *np, int m);
void cjewels(Snation *np, int j);
void cspell_pts(Snation *np, int pts);
void cfood(Snation *np, int f);
void ctech_skill(Snation *np, int change);
void cmag_skill(Snation *np, int change);
int my_scr_dump(WINDOW *w, char fname[]);
int mail_read(int reader);
void mail_write();
int mail_send(char mailfile[], int sender, int receiver, char subject[]);
void edit(char *t_fn);
int has_mail_lock(int id);
void lock_mail(int nation);
void unlock_mail(int nation);
void show_file(char name[]);
void get_space();
void cinfo(char fname[], char tag[]);
void bad_key();
int first_sect_mage_id(Snation *np, Ssector *sp);
void show_armies(Ssector *sp);
void list_spells(Suser *up);
void list_spirits(Suser *up);
void summon(Suser *up, WINDOW *w);
void cast_spell(Suser *up, WINDOW *w);
void initiate_mage(Suser *up, WINDOW *w);
void show_hanging_spells(Suser *up);
int is_mage(Sarmy *ap);
int spirit_type_index(char type[]);
int exec_spell(Sspell *spellp, WINDOW *w);
void exec_summon(int type_index, char name[]);
void exec_initiate(char name[]);
int zoom_on_h_spell(Sh_spell *h_list, WINDOW *sw);
int zoom_del_h_spell(Sh_spell *h_list, WINDOW *sw);
int free_army_id(Snation *np);
void aflag_set(Sarmy *ap, int flag);
void fix_sector_line(char line[], char s[]);
void delete_hanging_spell(Sh_spell *sp1);
int init_diplo(int n);
int read_in_diplo(Sdiplo **dm, int n);
int read_initial_diplo(Sdiplo **dm, int n);
void increase_diplo(Sdiplo **dm_old, Sdiplo **dm_new, int n, Snation *np);
void dump_diplo(Snation *np, Sdiplo **dm, int n);
void free_diplo(Sdiplo **dm, int n);
void update_diplo();
int have_met(Sdiplo **dm, int nation1, int nation2);
int diplo_is_locked();
int my_scr_restore(char fname[]);
void draw_info_screen(WINDOW * w, Snation * np);
void cpass(Snation *np, char pass[]);
int change_passwd(Snation *np, WINDOW *w);
void change_leader(Snation *np, WINDOW *w);
void set_aggressiveness(Snation *np, WINDOW *current_win);
int univ_intel(Snation * np);
int priestliness(Snation * np);
void draw_production_screen(WINDOW * w, Snation *np);
int get_employed(Snation *np);
int get_emp_met(Snation *np);
int get_emp_jwl(Snation *np);
int get_emp_farm(Snation *np);
int get_emp_serv(Snation *np);
int get_unemployed(Snation *np);
int get_unemp_met(Snation *np);
int get_unemp_jwl(Snation *np);
int get_unemp_farm(Snation *np);
int get_unemp_serv(Snation *np);
int military_maint(Snation *np);
int military_maint_metal(Snation *np);
int military_maint_jewels(Snation *np);
int military_maint_spell_pts(Snation *np);
char info_report();
void spy_report(int id);
int spy_figure(int n, int expend, Snation *spying_np, Snation *spied_np, int cost_fact);
void swapgoods(Snation *fromnat, Snation *tonat, int amt, int item);
void get_apparent_type(Sarmy *ap, char type[]);
void get_army_status(Sarmy *ap, char s[]);
int jarmy();
void move_army(int id, WINDOW *aw);
int transport();
void previous_army();
void next_army();
int next_nation_army(Snation *np, int old_id);
int prev_nation_army(Snation *np, int old_id);
void just_moved();
void change_army_status(WINDOW *aw, int id);
void list_available_armies(Suser *up, WINDOW *aw);
int draft_army(Snation *np);
int army_disband(Ssector *sp, Sarmy *ap);
void army_examine(Sarmy * ap);
int zoom_armies(Suser *up, Ssector *sp);
int army_merge(Sarmy * ap);
int army_split(Sarmy * ap);
void donate_army(Sarmy *ap, Ssector *sp);
int next_sect_army(Ssector *sp, Sarmy *ap);
int prev_sect_army(Ssector *sp, Sarmy *ap);
int cargo_not_empty(Scargo *cargop);
int is_spelled(Sarmy *ap);
int can_occupy(Sarmy *ap);
int can_patrol(Sarmy *ap);
int can_intercept(Sarmy *ap);
int can_garrison(Sarmy *ap);
void army_visibility(int **visible_sectors, Sarmy *ap);
int is_avail_army_type(Suser *up, char type[]);
int army_cost(Sarmy *ap);
int army_cost_metal(Sarmy *ap);
int army_weight(Sarmy *ap);
void cpeople_sector(Ssector *sp, int p);
int army_type_index(char type[]);
int zoom_army_page(WINDOW *azlw, Sarmy *armies, Ssector *sp, int page, int len_page, int show_cargo);
void zoom_list_armies(WINDOW *azlw, Sarmy *armies, Ssector *sp, int start_army, int len_win, int cargo);
int get_spell_pts_maint(Sarmy *ap);
void donate_cargo(int x, int y, int from_id, int to_id, Scargo *cargo);
int army_move_rate(Snation *np, Sarmy *ap);
char *contents(int money, int metal, int jewels, int food, int people, int army, Pt *title, int sp);

#endif // _FUNCTIONS_H_
