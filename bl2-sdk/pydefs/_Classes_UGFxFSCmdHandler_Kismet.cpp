#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler_Kismet()
{
    class_< UGFxFSCmdHandler_Kismet, bases< UGFxFSCmdHandler >  , boost::noncopyable>("UGFxFSCmdHandler_Kismet", no_init)
        .def("StaticClass", &UGFxFSCmdHandler_Kismet::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventFSCommand", &UGFxFSCmdHandler_Kismet::eventFSCommand)
        .staticmethod("StaticClass")
  ;
}