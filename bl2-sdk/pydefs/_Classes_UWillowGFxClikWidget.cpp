#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxClikWidget()
{
    class_< UWillowGFxClikWidget, bases< UGFxClikWidget >  , boost::noncopyable>("UWillowGFxClikWidget", no_init)
        .def("StaticClass", &UWillowGFxClikWidget::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnEvent", &UWillowGFxClikWidget::OnEvent)
        .def("OnClikEvent", &UWillowGFxClikWidget::OnClikEvent)
        .def("AddClikEvent", &UWillowGFxClikWidget::AddClikEvent)
        .staticmethod("StaticClass")
  ;
}