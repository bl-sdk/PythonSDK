#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGestaltPartMatrices(py::module &m)
{
    py::class_< UGestaltPartMatrices,  UObject   >(m, "UGestaltPartMatrices")
        .def_readwrite("GestaltAccessoryMeshList", &UGestaltPartMatrices::GestaltAccessoryMeshList)
        .def_readwrite("Matrices", &UGestaltPartMatrices::Matrices)
        .def_readwrite("ArchetypeName", &UGestaltPartMatrices::ArchetypeName)
        .def("StaticClass", &UGestaltPartMatrices::StaticClass, py::return_value_policy::reference)
          ;
}