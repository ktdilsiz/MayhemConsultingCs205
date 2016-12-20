create table if not exists dummy_messages
	(id_msg		integer 	primary key unique not null,
	time		DATETIME	not null,
	content		text		not null,
	groupname	text		not null,
	recipient	text		
	);

