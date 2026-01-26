class PlaybackEngine : public QObject {
    Q_OBJECT
        QTimer* timer;
    int currentFrameIndex = 0;
    QList<QImage> frames;

public slots:
    void play() {
        timer->start(1000 / 24); // 24 FPS }
        void nextFrame() {
            currentFrameIndex = (currentFrameIndex + 1) % frames.size();
            emit frameChanged(frames[currentFrameIndex]);
        }
    };