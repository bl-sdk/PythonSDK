#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInterpActor_ForCinematic()
{
    class_< AInterpActor_ForCinematic, bases< AInterpActor >  , boost::noncopyable>("AInterpActor_ForCinematic", no_init)
        .def("StaticClass", &AInterpActor_ForCinematic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}