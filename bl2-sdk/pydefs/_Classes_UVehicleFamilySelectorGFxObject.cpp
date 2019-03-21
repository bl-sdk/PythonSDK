#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleFamilySelectorGFxObject()
{
    class_< UVehicleFamilySelectorGFxObject, bases< UGFxObject >  , boost::noncopyable>("UVehicleFamilySelectorGFxObject", no_init)
        .def("StaticClass", &UVehicleFamilySelectorGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("TryScrollDown", &UVehicleFamilySelectorGFxObject::TryScrollDown)
        .def("TryScrollUp", &UVehicleFamilySelectorGFxObject::TryScrollUp)
        .def("SetSelectedVehicleFamilyIndex", &UVehicleFamilySelectorGFxObject::SetSelectedVehicleFamilyIndex)
        .def("EndAddCells", &UVehicleFamilySelectorGFxObject::EndAddCells)
        .def("AddCell", &UVehicleFamilySelectorGFxObject::AddCell)
        .def("BeginAddCells", &UVehicleFamilySelectorGFxObject::BeginAddCells)
        .staticmethod("StaticClass")
  ;
}