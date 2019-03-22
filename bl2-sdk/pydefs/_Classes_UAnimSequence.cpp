#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimSequence(py::module &m)
{
    py::class_< UAnimSequence,  UObject   >(m, "UAnimSequence")
        .def_readwrite("SequenceName", &UAnimSequence::SequenceName)
        .def_readwrite("Notifies", &UAnimSequence::Notifies)
        .def_readwrite("MetaData", &UAnimSequence::MetaData)
        .def_readwrite("BoneControlModifiers", &UAnimSequence::BoneControlModifiers)
        .def_readwrite("SequenceLength", &UAnimSequence::SequenceLength)
        .def_readwrite("NumFrames", &UAnimSequence::NumFrames)
        .def_readwrite("RateScale", &UAnimSequence::RateScale)
        .def_readwrite("RawAnimData", &UAnimSequence::RawAnimData)
        .def_readwrite("RawAnimationData", &UAnimSequence::RawAnimationData)
        .def_readwrite("TranslationData", &UAnimSequence::TranslationData)
        .def_readwrite("RotationData", &UAnimSequence::RotationData)
        .def_readwrite("CurveData", &UAnimSequence::CurveData)
        .def_readwrite("TranslationCompressionFormat", &UAnimSequence::TranslationCompressionFormat)
        .def_readwrite("RotationCompressionFormat", &UAnimSequence::RotationCompressionFormat)
        .def_readwrite("KeyEncodingFormat", &UAnimSequence::KeyEncodingFormat)
        .def_readwrite("CompressedTrackOffsets", &UAnimSequence::CompressedTrackOffsets)
        .def_readwrite("CompressedByteStream", &UAnimSequence::CompressedByteStream)
        .def_readwrite("TranslationCodec", &UAnimSequence::TranslationCodec)
        .def_readwrite("RotationCodec", &UAnimSequence::RotationCodec)
        .def_readwrite("AdditiveRefPose", &UAnimSequence::AdditiveRefPose)
        .def_readwrite("AdditiveBasePose", &UAnimSequence::AdditiveBasePose)
        .def_readwrite("EncodingPkgVersion", &UAnimSequence::EncodingPkgVersion)
        .def_readwrite("UseScore", &UAnimSequence::UseScore)
        .def_readwrite("DeltaTrackCache", &UAnimSequence::DeltaTrackCache)
        .def("GetNotifyTimeByClass", [](UAnimSequence &self , class UClass* NotifyClass, float PlayRate, float StartPosition) { class UAnimNotify** pyout_Notify = 0 ; float* pyout_Duration = (float*)malloc(sizeof(float)) ;  float ret =  self.GetNotifyTimeByClass(NotifyClass, PlayRate, StartPosition, pyout_Notify, pyout_Duration); return py::make_tuple(ret, *pyout_Notify, *pyout_Duration); })
          ;
}