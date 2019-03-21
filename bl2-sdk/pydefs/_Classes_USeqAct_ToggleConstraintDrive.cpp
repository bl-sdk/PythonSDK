#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleConstraintDrive()
{
    class_< USeqAct_ToggleConstraintDrive, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ToggleConstraintDrive", no_init)
        .def("StaticClass", &USeqAct_ToggleConstraintDrive::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}