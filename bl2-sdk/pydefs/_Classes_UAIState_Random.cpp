#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIState_Random()
{
    class_< UAIState_Random, bases< UGearboxEditorNode >  , boost::noncopyable>("UAIState_Random", no_init)
        .def("StaticClass", &UAIState_Random::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}