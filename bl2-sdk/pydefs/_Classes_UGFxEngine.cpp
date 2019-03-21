#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxEngine()
{
    class_< UGFxEngine, bases< UObject >  , boost::noncopyable>("UGFxEngine", no_init)
        .def_readwrite("GCReferences", &UGFxEngine::GCReferences)
        .def_readwrite("RefCount", &UGFxEngine::RefCount)
        .def("StaticClass", &UGFxEngine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}