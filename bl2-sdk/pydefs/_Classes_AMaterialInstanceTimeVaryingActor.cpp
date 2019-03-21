#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMaterialInstanceTimeVaryingActor()
{
    class_< AMaterialInstanceTimeVaryingActor, bases< AActor >  , boost::noncopyable>("AMaterialInstanceTimeVaryingActor", no_init)
        .def_readwrite("MatInst", &AMaterialInstanceTimeVaryingActor::MatInst)
        .def("StaticClass", &AMaterialInstanceTimeVaryingActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}