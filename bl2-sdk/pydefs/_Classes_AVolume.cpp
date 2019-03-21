#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVolume()
{
    class_< AVolume, bases< AActor >  , boost::noncopyable>("AVolume", no_init)
        .def_readwrite("AssociatedActors", &AVolume::AssociatedActors)
        .def_readwrite("CsgOper", &ABrush::CsgOper)
        .def_readwrite("BrushColor", &ABrush::BrushColor)
        .def_readwrite("PolyFlags", &ABrush::PolyFlags)
        .def_readwrite("Brush", &ABrush::Brush)
        .def_readwrite("BrushComponent", &ABrush::BrushComponent)
        .def_readwrite("SavedSelections", &ABrush::SavedSelections)
        .def("StaticClass", &AVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventProcessActorSetVolume", &AVolume::eventProcessActorSetVolume)
        .def("eventCollisionChanged", &AVolume::eventCollisionChanged)
        .def("OnToggle", &AVolume::OnToggle)
        .def("eventSetInitialState", &AVolume::eventSetInitialState)
        .def("eventPostBeginPlay", &AVolume::eventPostBeginPlay)
        .def("AssociateActor", &AVolume::AssociateActor)
        .def("EncompassesPoint", &AVolume::EncompassesPoint)
        .def("Encompasses", &AVolume::Encompasses)
        .staticmethod("StaticClass")
  ;
}