#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_BodySetup()
{
    class_< URB_BodySetup, bases< UObject >  , boost::noncopyable>("URB_BodySetup", no_init)
        .def_readwrite("SleepFamily", &URB_BodySetup::SleepFamily)
        .def_readwrite("BoneName", &URB_BodySetup::BoneName)
        .def_readwrite("PhysMaterial", &URB_BodySetup::PhysMaterial)
        .def_readwrite("MassScale", &URB_BodySetup::MassScale)
        .def_readwrite("CollisionGeom", &URB_BodySetup::CollisionGeom)
        .def_readwrite("CollisionGeomScale3D", &URB_BodySetup::CollisionGeomScale3D)
        .def_readwrite("PreCachedPhysScale", &URB_BodySetup::PreCachedPhysScale)
        .def_readwrite("PreCachedPhysData", &URB_BodySetup::PreCachedPhysData)
        .def_readwrite("PreCachedPhysDataVersion", &URB_BodySetup::PreCachedPhysDataVersion)
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
        .def("StaticClass", &URB_BodySetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}