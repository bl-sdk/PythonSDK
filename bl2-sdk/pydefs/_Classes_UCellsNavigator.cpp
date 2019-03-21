#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCellsNavigator()
{
    class_< UCellsNavigator, bases< UObject >  , boost::noncopyable>("UCellsNavigator", no_init)
        .def_readwrite("Cells", &UCellsNavigator::Cells)
        .def_readwrite("UnnavigableIndices", &UCellsNavigator::UnnavigableIndices)
        .def_readwrite("CurrentSelectedCellIndex", &UCellsNavigator::CurrentSelectedCellIndex)
        .def_readwrite("MoveCellInfo", &UCellsNavigator::MoveCellInfo)
        .def("StaticClass", &UCellsNavigator::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventConstructInvMesh", &UCellsNavigator::eventConstructInvMesh, return_value_policy< reference_existing_object >())
        .def("CellIndex", &UCellsNavigator::CellIndex)
        .def("CellName", &UCellsNavigator::CellName)
        .def("SimpleMoveCell", &UCellsNavigator::SimpleMoveCell)
        .def("MoveCell", &UCellsNavigator::MoveCell)
        .def("SetupCell", &UCellsNavigator::SetupCell)
        .staticmethod("StaticClass")
  ;
}