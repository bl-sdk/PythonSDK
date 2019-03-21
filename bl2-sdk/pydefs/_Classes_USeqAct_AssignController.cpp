#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AssignController()
{
    class_< USeqAct_AssignController, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AssignController", no_init)
        .def_readwrite("ControllerClass", &USeqAct_AssignController::ControllerClass)
        .def("StaticClass", &USeqAct_AssignController::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}