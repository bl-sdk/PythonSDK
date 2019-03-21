#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABrush(py::object m)
{
    py::class_< ABrush,  AActor   >(m, "ABrush")
        .def_readwrite("CsgOper", &ABrush::CsgOper)
        .def_readwrite("BrushColor", &ABrush::BrushColor)
        .def_readwrite("PolyFlags", &ABrush::PolyFlags)
        .def_readwrite("Brush", &ABrush::Brush)
        .def_readwrite("BrushComponent", &ABrush::BrushComponent)
        .def_readwrite("SavedSelections", &ABrush::SavedSelections)
        .def("StaticClass", &ABrush::StaticClass, py::return_value_policy::reference)
          ;
}