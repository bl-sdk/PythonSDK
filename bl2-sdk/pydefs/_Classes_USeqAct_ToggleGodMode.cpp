#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleGodMode()
{
    class_< USeqAct_ToggleGodMode, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ToggleGodMode", no_init)
        .def("StaticClass", &USeqAct_ToggleGodMode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}