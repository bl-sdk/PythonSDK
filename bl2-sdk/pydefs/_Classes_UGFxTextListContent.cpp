#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxTextListContent()
{
    class_< UGFxTextListContent, bases< UObject >  , boost::noncopyable>("UGFxTextListContent", no_init)
        .def_readwrite("TextListContent", &UGFxTextListContent::TextListContent)
        .def("StaticClass", &UGFxTextListContent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetObjectForIndex", &UGFxTextListContent::GetObjectForIndex, return_value_policy< reference_existing_object >())
        .def("GetTextAndLabelForIndex", &UGFxTextListContent::GetTextAndLabelForIndex)
        .def("AddEntry", &UGFxTextListContent::AddEntry)
        .def("GetLength", &UGFxTextListContent::GetLength)
        .def("Empty", &UGFxTextListContent::Empty)
        .staticmethod("StaticClass")
  ;
}