import opendbpy as odb
import os 

current_dir = os.path.dirname(os.path.realpath(__file__))
tests_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
opendb_dir = os.path.abspath(os.path.join(tests_dir, os.pardir))
data_dir = os.path.join(tests_dir, "data")

db = odb.dbDatabase.create()
odb.odb_read_lef(db, os.path.join(data_dir, "gscl45nm.lef"))
odb.odb_read_def(db, os.path.join(data_dir, "design.def"))
chip = db.getChip()
if chip == None:
    exit("Read DEF Failed")
exit()
