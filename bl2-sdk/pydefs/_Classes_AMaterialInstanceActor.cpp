#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMaterialInstanceActor()
{
    class_< AMaterialInstanceActor, bases< AActor >  , boost::noncopyable>("AMaterialInstanceActor", no_init)
        .def_readwrite("MatInst", &AMaterialInstanceActor::MatInst)
        .def("StaticClass", &AMaterialInstanceActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}