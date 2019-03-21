#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowPawn()
{
    class_< UActorFactoryWillowPawn, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWillowPawn", no_init)
        .def_readwrite("PawnArchetype", &UActorFactoryWillowPawn::PawnArchetype)
        .def("StaticClass", &UActorFactoryWillowPawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}