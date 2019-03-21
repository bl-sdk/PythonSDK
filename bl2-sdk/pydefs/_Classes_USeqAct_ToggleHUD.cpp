#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHUD()
{
    class_< USeqAct_ToggleHUD, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ToggleHUD", no_init)
        .def("StaticClass", &USeqAct_ToggleHUD::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ToggleHUD::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}