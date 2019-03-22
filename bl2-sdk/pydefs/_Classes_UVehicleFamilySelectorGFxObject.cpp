#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleFamilySelectorGFxObject(py::module &m)
{
    py::class_< UVehicleFamilySelectorGFxObject,  UGFxObject   >(m, "UVehicleFamilySelectorGFxObject")
        .def("TryScrollDown", &UVehicleFamilySelectorGFxObject::TryScrollDown)
        .def("TryScrollUp", &UVehicleFamilySelectorGFxObject::TryScrollUp)
        .def("SetSelectedVehicleFamilyIndex", &UVehicleFamilySelectorGFxObject::SetSelectedVehicleFamilyIndex)
        .def("EndAddCells", &UVehicleFamilySelectorGFxObject::EndAddCells)
        .def("AddCell", &UVehicleFamilySelectorGFxObject::AddCell)
        .def("BeginAddCells", &UVehicleFamilySelectorGFxObject::BeginAddCells)
          ;
}