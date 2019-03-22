#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureFlipBook(py::module &m)
{
    py::class_< UTextureFlipBook,  UTexture2D   >(m, "UTextureFlipBook")
        .def_readwrite("VfTable_FTickableObject", &UTextureFlipBook::VfTable_FTickableObject)
        .def_readwrite("TimeIntoMovie", &UTextureFlipBook::TimeIntoMovie)
        .def_readwrite("TimeSinceLastFrame", &UTextureFlipBook::TimeSinceLastFrame)
        .def_readwrite("HorizontalScale", &UTextureFlipBook::HorizontalScale)
        .def_readwrite("VerticalScale", &UTextureFlipBook::VerticalScale)
        .def_readwrite("HorizontalImages", &UTextureFlipBook::HorizontalImages)
        .def_readwrite("VerticalImages", &UTextureFlipBook::VerticalImages)
        .def_readwrite("FBMethod", &UTextureFlipBook::FBMethod)
        .def_readwrite("FrameRate", &UTextureFlipBook::FrameRate)
        .def_readwrite("FrameTime", &UTextureFlipBook::FrameTime)
        .def_readwrite("CurrentRow", &UTextureFlipBook::CurrentRow)
        .def_readwrite("CurrentColumn", &UTextureFlipBook::CurrentColumn)
        .def_readwrite("RenderOffsetU", &UTextureFlipBook::RenderOffsetU)
        .def_readwrite("RenderOffsetV", &UTextureFlipBook::RenderOffsetV)
        .def_readwrite("ReleaseResourcesFence", &UTextureFlipBook::ReleaseResourcesFence)
        .def("SetCurrentFrame", &UTextureFlipBook::SetCurrentFrame)
        .def("Stop", &UTextureFlipBook::Stop)
        .def("Pause", &UTextureFlipBook::Pause)
        .def("Play", &UTextureFlipBook::Play)
          ;
}