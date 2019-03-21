#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryClone()
{
    class_< UActorFactoryClone, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryClone", no_init)
        .def_readwrite("CloneArchetype", &UActorFactoryClone::CloneArchetype)
        .def_readwrite("NewCloneTag", &UActorFactoryClone::NewCloneTag)
        .def("StaticClass", &UActorFactoryClone::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}