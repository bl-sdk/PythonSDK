#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHidden()
{
    class_< USeqAct_ToggleHidden, bases< USeqAct_Toggle >  , boost::noncopyable>("USeqAct_ToggleHidden", no_init)
        .def_readwrite("IgnoreBasedClasses", &USeqAct_ToggleHidden::IgnoreBasedClasses)
        .def("StaticClass", &USeqAct_ToggleHidden::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}