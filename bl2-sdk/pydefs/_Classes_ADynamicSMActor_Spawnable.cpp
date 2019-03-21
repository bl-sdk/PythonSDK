#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicSMActor_Spawnable()
{
    class_< ADynamicSMActor_Spawnable, bases< ADynamicSMActor >  , boost::noncopyable>("ADynamicSMActor_Spawnable", no_init)
        .def("StaticClass", &ADynamicSMActor_Spawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}