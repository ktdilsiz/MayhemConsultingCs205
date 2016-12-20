create table if not exists users
	(id		integer	primary key unique not null,
	username	text	not null,
	password	text	not null,
	email		text	not null,
	phoneno		text	not null,
	firstname	text	not null,
	lastname	text	not null,
	type		integer not null
	);

create table if not exists groups
	(id 		integer	primary key unique not null,
	groupname	text	not null
	);

create table if not exists usergroups
	(username	text	not null,
	groupname	text	not null
	);
