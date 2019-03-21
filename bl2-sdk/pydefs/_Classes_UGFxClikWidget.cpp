#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxClikWidget()
{
    class_< UGFxClikWidget, bases< UGFxObject >  , boost::noncopyable>("UGFxClikWidget", no_init)
        .def("StaticClass", &UGFxClikWidget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ASRemoveAllEventListeners", &UGFxClikWidget::ASRemoveAllEventListeners)
        .def("ASAddEventListener", &UGFxClikWidget::ASAddEventListener)
        .def("SetListener", &UGFxClikWidget::SetListener)
        .def("GetEventStringFromTypename", &UGFxClikWidget::GetEventStringFromTypename)
        .def("RemoveAllEventListeners", &UGFxClikWidget::RemoveAllEventListeners)
        .def("AddEventListener", &UGFxClikWidget::AddEventListener)
        .def("EventListener", &UGFxClikWidget::EventListener)
        .staticmethod("StaticClass")
  ;
}