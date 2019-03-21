#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ConsoleCommand()
{
    class_< USeqAct_ConsoleCommand, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ConsoleCommand", no_init)
        .def_readwrite("Command", &USeqAct_ConsoleCommand::Command)
        .def_readwrite("Commands", &USeqAct_ConsoleCommand::Commands)
        .def("StaticClass", &USeqAct_ConsoleCommand::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ConsoleCommand::eventGetObjClassVersion)
        .def("VersionUpdated", &USeqAct_ConsoleCommand::VersionUpdated)
        .staticmethod("StaticClass")
  ;
}