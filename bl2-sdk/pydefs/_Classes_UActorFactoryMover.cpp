#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryMover()
{
    class_< UActorFactoryMover, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryMover", no_init)
        .def_readwrite("StaticMesh", &UActorFactoryDynamicSM::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryDynamicSM::DrawScale3D)
        .def_readwrite("CollisionType", &UActorFactoryDynamicSM::CollisionType)
        .def("StaticClass", &UActorFactoryMover::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}