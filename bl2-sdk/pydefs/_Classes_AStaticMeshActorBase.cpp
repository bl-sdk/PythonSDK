#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBase()
{
    class_< AStaticMeshActorBase, bases< AActor >  , boost::noncopyable>("AStaticMeshActorBase", no_init)
        .def("StaticClass", &AStaticMeshActorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}