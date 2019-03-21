#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_LastTalker()
{
    class_< UGearboxDialogVar_LastTalker, bases< UGearboxDialogVariable >  , boost::noncopyable>("UGearboxDialogVar_LastTalker", no_init)
        .def("StaticClass", &UGearboxDialogVar_LastTalker::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}