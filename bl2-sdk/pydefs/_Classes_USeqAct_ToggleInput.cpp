#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleInput()
{
    class_< USeqAct_ToggleInput, bases< USeqAct_Toggle >  , boost::noncopyable>("USeqAct_ToggleInput", no_init)
        .def("StaticClass", &USeqAct_ToggleInput::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}