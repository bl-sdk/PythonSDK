#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABrush()
{
    class_< ABrush, bases< AActor >  , boost::noncopyable>("ABrush", no_init)
        .def_readwrite("CsgOper", &ABrush::CsgOper)
        .def_readwrite("BrushColor", &ABrush::BrushColor)
        .def_readwrite("PolyFlags", &ABrush::PolyFlags)
        .def_readwrite("Brush", &ABrush::Brush)
        .def_readwrite("BrushComponent", &ABrush::BrushComponent)
        .def_readwrite("SavedSelections", &ABrush::SavedSelections)
        .def("StaticClass", &ABrush::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}