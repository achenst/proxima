use test_db;

insert into test_forward_with_blob_gbk values(5, '��', '��5555', '555', '55555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555', 5.0, '[1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,5]');
insert into test_forward_with_blob_gbk values(6, '��', '��6666', '666', '66666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666', 6.0, '[1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,6]');
insert into test_forward_with_blob_gbk values(7, '��', '��7777', '777', '77777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777', 7.0, '[1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,7]');

update test_forward_with_blob_gbk set f5 = f5 + 1;

delete from test_forward_with_blob_gbk where id=7;

select count(*) from test_forward_with_blob_gbk;