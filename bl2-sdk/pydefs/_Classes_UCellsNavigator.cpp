#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCellsNavigator(py::module &m)
{
    py::class_< UCellsNavigator,  UObject   >(m, "UCellsNavigator")
        .def_readwrite("Cells", &UCellsNavigator::Cells)
        .def_readwrite("UnnavigableIndices", &UCellsNavigator::UnnavigableIndices)
        .def_readwrite("CurrentSelectedCellIndex", &UCellsNavigator::CurrentSelectedCellIndex)
        .def_readwrite("MoveCellInfo", &UCellsNavigator::MoveCellInfo)
        .def("StaticClass", &UCellsNavigator::StaticClass, py::return_value_policy::reference)
        .def("eventConstructInvMesh", &UCellsNavigator::eventConstructInvMesh, py::return_value_policy::reference)
        .def("CellIndex", &UCellsNavigator::CellIndex)
        .def("CellName", &UCellsNavigator::CellName)
        .def("SimpleMoveCell", &UCellsNavigator::SimpleMoveCell)
        .def("MoveCell", &UCellsNavigator::MoveCell)
        .def("SetupCell", &UCellsNavigator::SetupCell)
          ;
}